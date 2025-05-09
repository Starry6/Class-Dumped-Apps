@interface AWEIMReadReceiptDataCenter : NSObject
@property (nonatomic) <IESIMConversationReadReceiptProtocol> conversationReadReceiptManager;
@property (nonatomic) NSHashTable readReceiptPullingDataSources;
@property (nonatomic) NSSet requestingIDs;
@property (nonatomic) BOOL hasRegisterNoti;
@property (nonatomic) BOOL lastRequestSuccess;
@property (nonatomic) BOOL hasSentInitialRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCConnectManagerProtocol> connectManager;
- (void)didFinishLogoutWithUid:;
- (void)ieslc_onConnectionStateChanged:connectionState:url:;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)requestingIDs;
- (id)readReceiptPullingDataSources;
- (id)conversationReadReceiptManager;
- (void)addPullingDataSource:;
- (void)onReceiveReadReceiptPush:;
- (void)stopPullingTimer;
- (id)createReadReceiptReqModel;
- (void)setConversationReadReceiptManager:;
- (void)setReadReceiptPullingDataSources:;
- (void)setRequestingIDs:;
- (BOOL)hasRegisterNoti;
- (void)setHasRegisterNoti:;
- (BOOL)lastRequestSuccess;
- (void)setLastRequestSuccess:;
- (BOOL)hasSentInitialRequest;
- (void)setHasSentInitialRequest:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)commonInit;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)unregisterNotifications;
+ (id)sharedInstance;
+ (BOOL)isConnected;
@end
