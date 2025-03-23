/* 
 * writing an image to a ppm file
 */
#include <iostream>

using std::cout;
using std::clog;
using std::flush;

int main()
{
	int width = 200;
	int height = 200;
	
	cout << "P3" << "\n";
	cout << width << " " << height << "\n";
	cout << "255" << "\n";

	for (int i = 0; i < height; i++)
	{
		clog << "\rScanlines remaining: " << (height - 1) - i << " " << flush;
		for (int j = 0; j < width; j++)
		{
			auto red = double(i) / (height - 1);
			auto green = double(j) / (width - 1);
			auto blue = 0;

			int r = int(red * 255.99);
			int g = int(green * 255.99);
			int b = int(blue * 255.99);

			cout << r << " " << g << " " << b << "  ";
		}
		cout << "\n";
	}
	clog << "\nDone.\n";
}
