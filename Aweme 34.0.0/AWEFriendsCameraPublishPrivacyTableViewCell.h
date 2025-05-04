@interface AWEFriendsCameraPublishPrivacyTableViewCell : AWENewPublishTableCell
@property (nonatomic) UIView privacySelectContainerView;
@property (nonatomic) UIButton lastChoiceButton;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)addSubviewsForContentView;
- (void)setPublishModel:;
- (id)privacySelectContainerView;
- (id)lastChoiceButton;
- (void)addBadge;
- (void)p_clickLastChoiceButton;
- (void)configWithPublishViewModel:;
- (void)updateLastChoiceButtonTitle:;
- (void)updateLastChoiceButtonHidden:;
- (void)setPrivacySelectContainerView:;
- (void)setLastChoiceButton:;
- (void).cxx_destruct;
@end
