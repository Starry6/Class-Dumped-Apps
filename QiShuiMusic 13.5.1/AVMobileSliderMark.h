@interface AVMobileSliderMark : NSObject
@property (nonatomic) float startValue;
@property (nonatomic) float endValue;
@property (nonatomic) UIColor filledColor;
@property (nonatomic) UIColor unfilledColor;
- (void).cxx_destruct;
- (float)endValue;
- (float)startValue;
- (id)initWithStartValue:endValue:filledColor:unfilledColor:;
- (id)filledColor;
- (id)unfilledColor;
@end
