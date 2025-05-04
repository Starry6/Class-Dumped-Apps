@interface AWEFollowListClassificationEntranceIndicator : UIView
@property (nonatomic) UIView indicatorForeground;
@property (nonatomic) UIView indicatorBackground;
@property (nonatomic) float totalWidth;
- (void)updateIndicatorWithProgress:;
- (void)setTotalWidth:;
- (void)setIndicatorBackground:;
- (id)indicatorBackground;
- (void)setIndicatorForeground:;
- (id)indicatorForeground;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupView;
- (float)totalWidth;
@end
