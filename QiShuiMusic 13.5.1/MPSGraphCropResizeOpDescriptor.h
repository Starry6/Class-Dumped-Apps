@interface MPSGraphCropResizeOpDescriptor : NSObject
@property (nonatomic) Q resizeWidth;
@property (nonatomic) Q resizeHeight;
@property (nonatomic) BOOL normalizeCoordinates;
@property (nonatomic) float spatialScale;
@property (nonatomic) Q resizeMode;
@property (nonatomic) Q samplingMode;
@property (nonatomic) Q coordinateMode;
- (void)setResizeMode:;
- (unsigned long long)resizeMode;
- (id)copyWithZone:;
- (unsigned long long)resizeWidth;
- (void)setResizeWidth:;
- (unsigned long long)resizeHeight;
- (void)setResizeHeight:;
- (BOOL)normalizeCoordinates;
- (void)setNormalizeCoordinates:;
- (float)spatialScale;
- (void)setSpatialScale:;
- (unsigned long long)samplingMode;
- (void)setSamplingMode:;
- (unsigned long long)coordinateMode;
- (void)setCoordinateMode:;
+ (id)descriptorWithResizeWidth:resizeHeight:normalizeCoordinates:spatialScale:resizeMode:samplingMode:coordinateMode:;
+ (id)descriptorWithResizeWidth:resizeHeight:;
@end
