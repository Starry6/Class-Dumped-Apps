@interface AWERVDetailVideoRelatedVideoTabFakeCell : UIView
@property (nonatomic) UIView coverBanner;
@property (nonatomic) UIView nicknameBanner;
@property (nonatomic) UIView avatarBanner;
@property (nonatomic) UIView followBanner;
@property (nonatomic) AWERVDetailPageContext pageContext;
- (id)initWithFrame:pageContext:;
- (id)createBanner;
- (void)setCoverBanner:;
- (id)coverBanner;
- (void)setFollowBanner:;
- (id)followBanner;
- (id)avatarBanner;
- (void)setAvatarBanner:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)nicknameBanner;
- (void)setNicknameBanner:;
- (void)setPageContext:;
- (id)pageContext;
@end
