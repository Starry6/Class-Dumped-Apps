@interface VNSupportedImageSize : NSObject
@property (nonatomic) VNSizeRange pixelsWideRange;
@property (nonatomic) VNSizeRange pixelsHighRange;
@property (nonatomic) Q aspectRatioHandling;
@property (nonatomic) I idealImageFormat;
@property (nonatomic) I idealOrientation;
@property (nonatomic) BOOL orientationAgnostic;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)pixelsWideRange;
- (id)pixelsHighRange;
- (id)initWithIdealFormat:pixelsWideRange:pixelsHighRange:aspectRatioHandling:idealOrientation:orientationAgnostic:;
- (id)initWithIdealFormat:width:height:orientation:aspectRatioHandling:orientationAgnostic:;
- (BOOL)isAllowedPixelsWide:pixelsHigh:;
- (unsigned long long)aspectRatioHandling;
- (unsigned int)idealImageFormat;
- (unsigned int)idealOrientation;
- (BOOL)isOrientationAgnostic;
+ (BOOL)supportsSecureCoding;
@end
