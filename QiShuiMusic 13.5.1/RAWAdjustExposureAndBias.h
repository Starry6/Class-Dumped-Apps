@interface RAWAdjustExposureAndBias : RAWFilter
- (id)customAttributes;
- (void)setInputBias:;
- (void).cxx_destruct;
- (void)setInputExposure:;
- (id)outputImage;
- (id)outputMatrix;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (id)customAttributes;
@end
