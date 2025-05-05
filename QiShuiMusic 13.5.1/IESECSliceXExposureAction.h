@interface IESECSliceXExposureAction : IESECSliceXAction
@property (nonatomic) double threshold;
- (double)threshold;
- (void)setThreshold:;
+ (id)propertyKeyWithJSONKey;
@end
