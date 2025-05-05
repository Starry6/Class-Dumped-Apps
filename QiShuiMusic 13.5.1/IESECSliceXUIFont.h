@interface IESECSliceXUIFont : NSObject
@property (nonatomic) double fontScaleRatio;
- (double)scaledFontSize:;
- (id)fontOfSize:weightOfInt:;
- (double)fontScaleRatio;
- (id)initWithFontScaleRatio:;
+ (id)rawFontOfSize:weightOfInt:;
@end
