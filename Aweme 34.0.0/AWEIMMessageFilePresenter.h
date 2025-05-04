@interface AWEIMMessageFilePresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMSmallCardPresenter smallCard;
@property (nonatomic) AWEIMUIImageViewPresenter iconBg;
@property (nonatomic) AWEIMUIImageViewPresenter icon;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (id)smallCard;
- (id)iconBg;
- (void)p_updateBGColor:withContext:;
- (id)p_makeSmallCardProps;
- (id)p_iconBgProps;
- (id)p_iconProps;
- (void)setSmallCard:;
- (void)setIconBg:;
- (id)icon;
- (id)initWithContext:;
- (void)setIcon:;
- (void).cxx_destruct;
@end
