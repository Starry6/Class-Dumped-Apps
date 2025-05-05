@interface CSJVideoDetailLoadingView : UIView
@property (nonatomic) NSArray animationLayers;
@property (nonatomic) UILabel loadingLabel;
- (id)animationLayers;
- (void)buildupViewWithFrame:;
- (void)p_addCorners:withView:;
- (void)setAnimationLayers:;
- (void)startLoading;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)loadingLabel;
- (void)setLoadingLabel:;
@end
