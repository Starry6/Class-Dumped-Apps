@interface AWEIMLocalGuidanceEntranceCardMessageComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMLocalGuidanceEntranceCardMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL isBlockedByTheOtherPerson;
@property (nonatomic) AWEUserModel fullDetailUser;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)localFansGroupCardMessageCellTapped;
- (void)__fetchBlockedStatusAndDataAndUpdateLabels;
- (void)__trackInviteFansCardShow;
- (void)__trackShowEvent;
- (void)__fetchFullDetailUserWithCompletion:;
- (void)__fetchDataIfNecessaryWithCompletion:;
- (BOOL)isBlockedByTheOtherPerson;
- (id)__zeroGroupStr;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (void)setIsBlockedByTheOtherPerson:;
- (void)__trackInviteFansCradClick;
- (void)__transferToFansGroupPage;
- (id)__baseTrackParams;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)defaultTitleStr;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
