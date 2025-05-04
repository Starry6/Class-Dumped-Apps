@interface AWEFeedSpeedOptimizeGuideView : UIView
@property (nonatomic) UIView backgroundMaskView;
@property (nonatomic) UIView verticalLineView;
@property (nonatomic) UIView verticalCircleView;
@property (nonatomic) UIView horizontalLineView;
@property (nonatomic) UIView horizontalCircleView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) q guideType;
- (long long)guideType;
- (void)setGuideType:;
- (void)hideGuideView;
- (void)showGuideViewOnView:type:;
- (id)verticalCircleView;
- (id)horizontalCircleView;
- (void)setVerticalCircleView:;
- (void)setHorizontalCircleView:;
- (id)textLabel;
- (id)init;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:;
- (id)horizontalLineView;
- (void)setHorizontalLineView:;
- (void)setVerticalLineView:;
- (id)verticalLineView;
@end
