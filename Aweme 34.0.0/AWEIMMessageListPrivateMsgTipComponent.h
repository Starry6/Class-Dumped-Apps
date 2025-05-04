@interface AWEIMMessageListPrivateMsgTipComponent : AWEIMMessageListTopFloatingBaseComponent
@property (nonatomic) AWEUserModel peerUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (id)peerUser;
- (void)setPeerUser:;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)p_fetchEnableShow:;
- (void)didClickTopTipViewActionBtnWithType:;
- (void)didClickTopTipViewCloseBtnWithType:;
- (BOOL)p_onlyFriendCanMessage;
- (void)saveStatusToStorage;
- (BOOL)p_noOneCanMessage;
- (BOOL)p_isBetween14And18YearOld;
- (void)dealloc;
- (void).cxx_destruct;
- (id)contentText;
+ (BOOL)canCreateComponentWithContext:;
@end
