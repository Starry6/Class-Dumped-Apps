@interface AWEDCFeedCreationUserAvatarResource : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView userAvatarImageView;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configWithModel:;
- (void)themeDidChange:;
- (id)classNameWithReferString;
- (id)userAvatarImageView;
- (void)loadUserAvatarImage;
- (double)userAvatarSize;
- (void)setUserAvatarImageView:;
- (void)didTapUser;
- (id)containerView;
- (id)initWithContext:;
- (void)setContainerView:;
- (void)setContext:;
- (id)size;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)setupViews;
@end
