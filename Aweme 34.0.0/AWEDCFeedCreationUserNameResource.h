@interface AWEDCFeedCreationUserNameResource : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configWithModel:;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (void)themeDidChange:;
- (id)classNameWithReferString;
- (double)userNameLabelFontSize;
- (id)userNameLabelColor;
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
