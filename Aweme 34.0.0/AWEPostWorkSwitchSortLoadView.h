@interface AWEPostWorkSwitchSortLoadView : UIView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UILabel label;
@property (nonatomic) Q state;
@property (nonatomic) double containerWidth;
- (void)startLoadingWithText:;
- (void)switchLoadingWithIntensifyStyle:;
- (double)loadingViewWidth;
- (void)setLabel:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (unsigned long long)state;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setState:;
- (id)labelTextSize;
- (double)containerWidth;
- (void)setContainerWidth:;
+ (id)preferedSize;
@end
