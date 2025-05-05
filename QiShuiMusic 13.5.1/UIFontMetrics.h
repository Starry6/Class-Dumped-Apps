@interface UIFontMetrics : NSObject
- (id)init;
- (id)ib_scaledFontForFont:maximumPointSize:;
- (double)scaledValueForValue:;
- (id)scaledFontForFont:maximumPointSize:;
- (double)scaledValueForValue:compatibleWithTraitCollection:;
- (id)scaledFontForFont:;
- (id)scaledFontForFont:maximumPointSize:compatibleWithTraitCollection:;
- (id)initForTextStyle:;
- (void).cxx_destruct;
- (id)ib_scaledFontForFont:;
- (id)scaledFontForFont:compatibleWithTraitCollection:;
+ (id)metricsForTextStyle:;
+ (double)scaledValueForValue:withTextStyle:bodyLeading:compatibleWithTraitCollection:;
+ (id)defaultMetrics;
@end
