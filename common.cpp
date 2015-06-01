#include "common.h"
#include "camera.h"
#include "mmalincludes.h"


int current_Exposure = 0;
const char* Exposure_Name_Enum[NUM_EXPOSURE] = {
	"EXPOSURE_OFF",
    "EXPOSURE_AUTO",
    "EXPOSURE_NIGHT",
    "EXPOSURE_NIGHTPREVIEW",
    "EXPOSURE_BACKLIGHT",
    "EXPOSURE_SPOTLIGHT",
    "EXPOSURE_SPORTS",
    "EXPOSURE_SNOW",
    "EXPOSURE_BEACH ",
    "EXPOSURE_VERYLONG",
	"EXPOSURE_FIXEDFPS",
	"EXPOSURE_ANTISHAKE",
	"EXPOSURE_FIREWORKS"
};
const MMAL_PARAM_EXPOSUREMODE_T Exposure_Enum[NUM_EXPOSURE] = {
	MMAL_PARAM_EXPOSUREMODE_OFF             ,
    MMAL_PARAM_EXPOSUREMODE_AUTO            ,
    MMAL_PARAM_EXPOSUREMODE_NIGHT           ,
    MMAL_PARAM_EXPOSUREMODE_NIGHTPREVIEW    ,
    MMAL_PARAM_EXPOSUREMODE_BACKLIGHT       ,
    MMAL_PARAM_EXPOSUREMODE_SPOTLIGHT       ,
    MMAL_PARAM_EXPOSUREMODE_SPORTS          ,
    MMAL_PARAM_EXPOSUREMODE_SNOW            ,
    MMAL_PARAM_EXPOSUREMODE_BEACH           ,
    MMAL_PARAM_EXPOSUREMODE_VERYLONG        ,
    MMAL_PARAM_EXPOSUREMODE_FIXEDFPS        ,
    MMAL_PARAM_EXPOSUREMODE_ANTISHAKE       ,
    MMAL_PARAM_EXPOSUREMODE_FIREWORKS
};

int current_AWB = 0;
const char* AWB_Name_Enum[NUM_AWB] = {
	"AWB_OFF",
    "AWB_AUTO",
    "AWB_SUNLIGHT",
    "AWB_CLOUDY",
    "AWB_SHADE",
    "AWB_TUNGSTEN",
    "AWB_FLUORESCENT",
    "AWB_INCANDESCENT",
    "AWB_FLASH",
    "AWB_HORIZON"
};
const MMAL_PARAM_AWBMODE_T AWB_Enum[NUM_AWB] = {
	MMAL_PARAM_AWBMODE_OFF  ,
	MMAL_PARAM_AWBMODE_AUTO  ,
	MMAL_PARAM_AWBMODE_SUNLIGHT  ,
	MMAL_PARAM_AWBMODE_CLOUDY  ,
	MMAL_PARAM_AWBMODE_SHADE  ,
	MMAL_PARAM_AWBMODE_TUNGSTEN  ,
	MMAL_PARAM_AWBMODE_FLUORESCENT  ,
	MMAL_PARAM_AWBMODE_INCANDESCENT  ,
	MMAL_PARAM_AWBMODE_FLASH  ,
	MMAL_PARAM_AWBMODE_HORIZON 
};

int current_FX = 0;
const char* FX_Name_Enum[NUM_FX] = {
	"FX_NONE",
	"FX_NEGATIVE",
	"FX_SOLARIZE",
	"FX_SKETCH",
	"FX_DENOISE",
	"FX_EMBOSS",
	"FX_OILPAINT",
	"FX_HATCH",
	"FX_GPEN",
	"FX_PASTEL",
	"FX_WATERCOLOUR",
	"FX_FILM",
	"FX_BLUR",
	"FX_SATURATION",
	"FX_COLOURSWAP",
	"FX_WASHEDOUT",
	"FX_POSTERIZE",
	"FX_COLOURPOINT",
	"FX_COLOURBALANCE",
	"FX_CARTOON"
};
const MMAL_PARAM_IMAGEFX_T FX_Enum[NUM_FX] = {
	MMAL_PARAM_IMAGEFX_NONE             ,
	MMAL_PARAM_IMAGEFX_NEGATIVE         ,
	MMAL_PARAM_IMAGEFX_SOLARIZE         ,
	MMAL_PARAM_IMAGEFX_SKETCH           ,
	MMAL_PARAM_IMAGEFX_DENOISE          ,
	MMAL_PARAM_IMAGEFX_EMBOSS           ,
	MMAL_PARAM_IMAGEFX_OILPAINT         ,
	MMAL_PARAM_IMAGEFX_HATCH            ,
	MMAL_PARAM_IMAGEFX_GPEN             ,
	MMAL_PARAM_IMAGEFX_PASTEL           ,
	MMAL_PARAM_IMAGEFX_WATERCOLOUR      ,
	MMAL_PARAM_IMAGEFX_FILM             ,
	MMAL_PARAM_IMAGEFX_BLUR             ,
	MMAL_PARAM_IMAGEFX_SATURATION       ,
	MMAL_PARAM_IMAGEFX_COLOURSWAP       ,
	MMAL_PARAM_IMAGEFX_WASHEDOUT        ,
	MMAL_PARAM_IMAGEFX_POSTERISE        ,
	MMAL_PARAM_IMAGEFX_COLOURPOINT      ,
	MMAL_PARAM_IMAGEFX_COLOURBALANCE    ,
    MMAL_PARAM_IMAGEFX_CARTOON 
};

int current_MeteringMode = 0;
const char* MeteringMode_Name_Enum[NUM_METERINGMODE] = {
	"METERINGMODE_AVERAGE",
    "METERINGMODE_SPOT",
    "METERINGMODE_BACKLIT",
    "METERINGMODE_MATRIX"
};
const MMAL_PARAM_EXPOSUREMETERINGMODE_T MeteringMode_Enum[NUM_METERINGMODE] = {
	MMAL_PARAM_EXPOSUREMETERINGMODE_AVERAGE,
	MMAL_PARAM_EXPOSUREMETERINGMODE_SPOT,
	MMAL_PARAM_EXPOSUREMETERINGMODE_BACKLIT,
	MMAL_PARAM_EXPOSUREMETERINGMODE_MATRIX	
};