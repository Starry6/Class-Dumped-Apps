@interface ARFaceTrackingTechnique : ARImageBasedTechnique
@property (nonatomic) BOOL isFaceTracked;
@property (nonatomic) q maximumNumberOfTrackedFaces;
- (id)init;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)maximumNumberOfTrackedFaces;
- (id)initWithMaximumNumberOfTrackedFaces:;
- (BOOL)isFaceTracked;
- (void)setIsFaceTracked:;
+ (BOOL)isSupported;
+ (BOOL)producesResultDataForAnchorOfClass:;
@end
