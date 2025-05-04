@interface AWEBeautySliderConfig : NSObject
@property (nonatomic) UIColor rangeMinimumTrackColor;
@property (nonatomic) UIColor rangeMaximumTrackColor;
@property (nonatomic) UIFont indicatorLabelFont;
@property (nonatomic) double indicatorLabelBottomMargin;
- (void)setRangeMinimumTrackColor:;
- (void)setRangeMaximumTrackColor:;
- (void)setIndicatorLabelFont:;
- (void)setIndicatorLabelBottomMargin:;
- (id)rangeMinimumTrackColor;
- (id)rangeMaximumTrackColor;
- (id)indicatorLabelFont;
- (double)indicatorLabelBottomMargin;
- (id)init;
- (void).cxx_destruct;
@end
