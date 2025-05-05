@interface IESECBlurEffectViewGenerator : NSObject
- (id)generateCustomBlurEffectViewWithStyle:alpha:;
- (id)generateStandardBlurEffectView;
+ (id)sharedGenerator;
@end
