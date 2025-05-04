@interface AWEIMChatRecommendVideoTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView reloadView;
@property (nonatomic) UILabel disableReloadLabel;
@property (nonatomic) Q type;
@property (nonatomic) @? didTapReloadBlock;
- (void)p_setupUI;
- (void)setDisableReloadLabel:;
- (void)p_reloadViewDidTapped:;
- (void)setReloadView:;
- (id)disableReloadLabel;
- (id)didTapReloadBlock;
- (void)p_setupDisplayTypeTwoColumns;
- (void)p_setupDisplayTypeSlideHorizontally;
- (void)stopReloadAnimation;
- (void)configWithStyle:;
- (void)disableReload;
- (void)hideReloadView;
- (void)startReloadAnimation;
- (void)setDidTapReloadBlock:;
- (id)init;
- (unsigned long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitle:;
- (id)reloadView;
@end
