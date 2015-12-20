#include "Objekte.hpp"

Objekte::Objekte()
    : type("Objekte"),
      Color(cv::Scalar(0, 0, 0))
{
}

Objekte::Objekte(std::string name)
    : type(name)
{
    if (name=="blue") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(100, 120, 200));
        this->setHSVmax(cv::Scalar(120, 180, 250));

        //BGR value for Blue:
        this->setColor(cv::Scalar(255, 0, 0));
    }

    if (name=="bluedark") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(105, 220, 140));
        this->setHSVmax(cv::Scalar(120, 240, 170));

        //BGR value for Blue:
        this->setColor(cv::Scalar(255, 0, 0));
    }

    //blue nah
    //100 120 200
    //120 180 250
    //blue fern
    //105 220 140
    //120 240 170
    if (name=="green") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(40, 30, 180));
        this->setHSVmax(cv::Scalar(75, 70, 250));

        //BGR value for Green:
        this->setColor(cv::Scalar(0, 255, 0));
    }
    //green nah
    //40 30 180
    //75 70 250
    //green fern
    //30 70 120
    //90 140 190

     if (name=="greendark") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(30, 70, 120));
        this->setHSVmax(cv::Scalar(90, 140, 190));

        //BGR value for Green:
        this->setColor(cv::Scalar(0, 255, 0));
    }

    if (name=="yellow") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(20, 110, 135)); //TODO: 135 only freehand! maybe 2nd yellow object
        this->setHSVmax(cv::Scalar(35, 210, 255));

        //BGR value for Yellow:
        this->setColor(cv::Scalar(0, 255, 255));
    }
    //yellow nah
    //25 110 250
    //35 180 255
    //yellow fern
    //20 160 200
    //35 210 255

	if (name=="red") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

		this->setHSVmin(cv::Scalar(0, 150, 210));
		this->setHSVmax(cv::Scalar(10, 240, 255));

        //BGR value for Red:
		this->setColor(cv::Scalar(0, 0, 255));
	}
    //red nah
    //0 150 240
    //10 185 255
    //red fern
    //0 220 210
    //0 240 235

    if (name=="cyan") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        this->setHSVmin(cv::Scalar(90, 30, 215));
		this->setHSVmax(cv::Scalar(110, 90, 255));

        //BGR value for Cyan:
		this->setColor(cv::Scalar(255, 255, 0));
    }
    //cyan nah
    //90 30 240
    //110 80 255
    //cyan fern
    //95 65 215
    //105 90 255

    if (name=="magenta") {
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

		this->setHSVmin(cv::Scalar(145, 40, 155));
		this->setHSVmax(cv::Scalar(165, 195, 245));

        //BGR value for Magenta:
		this->setColor(cv::Scalar(255, 0, 255));
    }
    //magenta nah
    //145 40 200
    //165 95 245
    //magenta fern
    //150 130 155
    //165 195 180
}

Objekte::~Objekte(void)
{
}

int Objekte::getXPos() {
    return this->xPos;
}

void Objekte::setXPos(int x) {
    this->xPos = x;
}

int Objekte::getYPos() {
    return this->yPos;
}

void Objekte::setYPos(int y) {
    this->yPos = y;
}

cv::Scalar Objekte::getHSVmin() {
    return this->HSVmin;
}

cv::Scalar Objekte::getHSVmax() {
    return this->HSVmax;
}

void Objekte::setHSVmin(cv::Scalar min) {
    this->HSVmin = min;
}

void Objekte::setHSVmax(cv::Scalar max) {
    this->HSVmax = max;
}