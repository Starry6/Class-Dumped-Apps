@interface RAWTemperatureAdjust : RAWFilter
- (id)customAttributes;
- (void).cxx_destruct;
- (void)setInputExposure:;
- (id)outputImage;
- (void)setInputWhitePoint:;
- (id)outputMatrix;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (id)customAttributes;
@end
