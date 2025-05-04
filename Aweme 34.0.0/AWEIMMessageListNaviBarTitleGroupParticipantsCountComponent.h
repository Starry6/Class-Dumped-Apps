@interface AWEIMMessageListNaviBarTitleGroupParticipantsCountComponent : AWEIMComponentBase
@property (nonatomic) UILabel countLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (double)naviBarTitleViewCustomSpacing;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)didFetchPeerFullDetailUser:;
- (void)p_updateText;
- (void)p_binding;
- (void).cxx_destruct;
- (id)countLabel;
- (void)setCountLabel:;
+ (BOOL)canCreateComponentWithContext:;
@end
