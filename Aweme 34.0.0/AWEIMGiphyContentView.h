@interface AWEIMGiphyContentView : UIView
@property (nonatomic) UITapGestureRecognizer coverTapGesture;
@property (nonatomic) UIView reloadView;
@property (nonatomic) BDImageView giphyImageView;
@property (nonatomic) @? coverDidTappedAction;
@property (nonatomic) @? reloadDidTapBlock;
- (id)giphyImageView;
- (void)setGiphyImageView:;
- (void)p_setupView;
- (void)setReloadView:;
- (void)setReloadDidTapBlock:;
- (void)configWithMessage:image:urls:bdImageCompletion:;
- (void)setCoverDidTappedAction:;
- (id)reloadDidTapBlock;
- (void)p_updateImageViewBackgroundColor:;
- (void)lazyCreateReloadView;
- (id)coverDidTappedAction;
- (void)p_didClickToGiphy;
- (void)setCoverTapGesture:;
- (void)p_reloadGiphyTap;
- (id)coverTapGesture;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)reloadView;
+ (BOOL)enableLazyCreateView;
@end
