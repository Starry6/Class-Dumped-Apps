@interface IESLiveWebpLoadingView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView<IESLiveWebPPlayer> loadingView;
@property (nonatomic) UIView<IESLiveWebPPlayer> progressView;
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
- (void)setProgressView:;
- (void)startAnimation;
- (long long)type;
- (void).cxx_destruct;
- (id)progressView;
- (id)initWithType:;
- (void)stopAnimation;
- (void)setTextLabel:;
- (id)loadingView;
- (void)setLoadingView:;
@end
