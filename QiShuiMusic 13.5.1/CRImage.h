@interface CRImage : NSObject
@property (nonatomic) CIImage ciImage;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ^{CGImage=} cgImage;
@property (nonatomic) BOOL vImageDataIsCopy;
@property (nonatomic) {vImage_Buffer=^vQQQ} vImage;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) NSInteger colorSpace;
@property (nonatomic) BOOL isFullRange;
- (void)dealloc;
- (id)pixelBuffer;
- (id)initWithContentsOfURL:;
- (int)colorSpace;
- (void)setCgImage:;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)writeToFile:;
- (id)cgImage;
- (id)initWithWidth:height:;
- (id)initWithCGImage:;
- (void).cxx_destruct;
- (id)initWithCIImage:;
- (unsigned long long)bytesPerPixel;
- (id)initWithCVPixelBuffer:;
- (void)setPixelBuffer:;
- (id)ciImage;
- (unsigned long long)numChannels;
- (void)setCiImage:;
- (id)initY8WithCVPixelBuffer:;
- (id)initARGB8888WithCVPixelBuffer:;
- (id)initYUV888WithCVPixelBuffer:;
- (id)initAYUV8888WithCVPixelBuffer:;
- (id)initWithCVPixelBuffer:toColorSpace:;
- (id)initWithCIImage:toColorSpace:;
- (void)runBlockWithARGB8888Image:blockOwnsMemory:;
- (id)pixelBufferWithScale:paddedToSize:;
- (id)pixelBufferWithScale:paddedToSize:adjustedToSize:;
- (id)pixelBufferWithScale:paddedToSize:adjustedToSize:mask:;
- (id)createFloatBuffer;
- (id)imageByApplyingHistogramCorrection;
- (id)imageByAdjustingBrightnessAlpha:beta:;
- (id)imageByCroppingTextFeature:correctedBoundingBox:padding:networkInputSize:;
- (id)imageByRotating90CW;
- (id)imageByRotating180;
- (id)imageByCorrectingFromOrientation:;
- (id)imageByScalingToWidth:height:;
- (id)imageByPaddingToRatioAndScalingToWidth:height:;
- (id)imageByPaddingToRatioAndScalingToWidth:height:alignCenter:;
- (id)imageByPaddingX:paddingY:;
- (id)imageByDilating;
- (id)imageByApplyingBinaryMask:;
- (id)initWithWidth:height:colorSpace:;
- (id)initWithVImageBuffer:inColorSpace:toColorSpace:;
- (id)initWithVImageBuffer:inColorSpace:;
- (id)initWithMat:;
- (id)imageByCroppingRectangle:;
- (id)imageByCroppingRectangle:textFeaturePoints:radians:rotatedRoi:;
- (id)rotatedRoiByCroppingRectangle:textFeaturePoints:radians:;
- (id)imageByCroppingRectangle:toHeight:andWidth:withRotationAngle:;
- (id)imageByRectifyingPolygon:minImageHeight:;
- (id)imageByInvertingIntensity;
- (id)initWithCGImage:toColorSpace:;
- (id)initWithCGImage:properties:toColorSpace:;
- (id)initWithContentsOfURL:toColorSpace:;
- (id)imageByConvertingToColorSpace:;
- (id)imageByOverlayingImage:opacity:;
- (id)imageByOverlayingRects:count:;
- (id)initWithCGImage:properties:;
- (id)initWithVImageBuffer:;
- (id)vImage;
- (BOOL)isFullRange;
- (BOOL)vImageDataIsCopy;
- (void)setVImageDataIsCopy:;
+ (id)allocateVImageBufferWithWidth:height:bytesPerPixel:;
+ (id)allocateVImageBufferWithWidth:height:colorSpace:;
+ (unsigned long long)bytesPerPixelForColorSpace:;
+ (unsigned long long)channelsForColorSpace:;
+ (id)nameForColorSpace:;
+ (void)cgOrientation:toVImageRotationMode:andReflection:;
+ (id)applyEXIFTransformsOnImage:inColorSpace:properties:;
+ (BOOL)convertVImage:inColorSpace:toVImage:toColorSpace:;
+ (void)drawVerticalLineAtXOffset:image:;
@end
