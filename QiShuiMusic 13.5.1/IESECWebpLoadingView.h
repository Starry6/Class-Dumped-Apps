@interface IESECWebpLoadingView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView loadingView;
@property (nonatomic) q type;
- (id)animatedViewWithImageName:;
- (id)layoutContainerViewWithLabel:progressView:;
- (void)layoutDefaultLoadingView:textContainer:;
- (void)layoutLoadingView:textContainer:type:;
- (void)layoutSmallLoadingView:textContainer:;
- (void)layoutSmallTextLoadingView:textContainer:;
- (id)loadingAnimationView;
- (id)loadingProgressView;
- (id)loadingSizeWithType:;
- (id)textLabel;
- (id)init;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)setTextLabel:;
- (id)loadingView;
- (void)setLoadingView:;
@end
