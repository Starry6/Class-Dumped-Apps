@interface AWEIMMessageListUserInfoComponent : AWEIMComponentBase
@property (nonatomic) NSObject<OS_dispatch_semaphore> fetchUserSem;
@property (nonatomic) AWEIMUser peerUser;
@property (nonatomic) AWEUserModel peerDetailUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (id)peerUser;
- (void)setPeerUser:;
- (void)viewDidLoadOnExit;
- (void)componentDidMounted:;
- (id)peerDetailUser;
- (void)setFetchUserSem:;
- (double)useUserCacheValidTime;
- (id)fetchUserSem;
- (void)p_oldVCFetchUserMethod:fullDetailUser:;
- (void)p_fetchPeerUserWithCompletion:;
- (void)notifyComponentsAfterFetchFullUser;
- (void)setPeerDetailUser:;
- (void)p_handlePushPayload:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
