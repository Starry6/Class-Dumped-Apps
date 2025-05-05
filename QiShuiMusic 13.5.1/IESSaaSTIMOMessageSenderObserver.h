@interface IESSaaSTIMOMessageSenderObserver : NSObject
@property (nonatomic) IESSaaSTIMMulticastDelegate multicastDelegate;
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)userWillLogout:;
- (id)addWeakObserver:;
- (void)message:inConversation:didReceiveAsyncResponse:error:;
- (void)message:inConversation:didReceiveResponse:error:;
- (id)multicastDelegate;
- (void)removeObserverWithIdentifier:;
- (void)setMulticastDelegate:;
- (void)userDidLogin:;
- (void)userDidLogout:;
- (void)setUp;
- (void)dealloc;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
+ (long long)startUpOrder;
+ (void)startUp;
+ (id)sharedInstance;
@end
