@interface AWEIMFeedContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) BOOL showLoading;
@property (nonatomic) <AWEIMCardMessageViewModelInterface> viewModel;
@property (nonatomic) NSString fansGroupDigCountDesc;
@property (nonatomic) @? coverTappedActionBlock;
@property (nonatomic) BOOL enableAvatarClickAction;
- (void)setShowLoading:;
- (void)setFansGroupDigCountDesc:;
- (id)fansGroupDigCountDesc;
- (BOOL)enableAvatarClickAction;
- (void)setEnableAvatarClickAction:;
- (void)setCoverTappedActionBlock:;
- (id)coverTappedActionBlock;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (BOOL)showLoading;
@end
