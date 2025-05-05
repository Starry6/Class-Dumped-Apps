@interface CIEnhancementHistogram : NSObject
- (id)values;
+ (id)histogramFromData:;
+ (id)histogramFromFloatData:;
+ (id)histogramFromDoubleData:;
@end
