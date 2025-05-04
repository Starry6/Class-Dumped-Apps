@interface AWEPadPolymericChannelCoverFavoriteTagView : UIView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIGestureRecognizer tapGesture;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) @? onClickCallback;
@property (nonatomic) BOOL isFavorited;
- (id)tagImageView;
- (void)showLoading:;
- (void)setIsFavorited:;
- (void)setTagImageView:;
- (void)bindEvent;
- (void)setOnClickCallback:;
- (id)onClickCallback;
- (void)onFavoritesBtnClicked:;
- (id)init;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupView;
- (BOOL)isFavorited;
@end
