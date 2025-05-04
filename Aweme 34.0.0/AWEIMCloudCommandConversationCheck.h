@interface AWEIMCloudCommandConversationCheck : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)excuteCommandWithParams:completion:;
- (BOOL)canDealConversationCheck;
- (void)forceCheckConversationListIntegrityIfNeed;
- (void)iesim_chatDataManager:pullDirection:didEndPullOfflineMessagesWithHasMore:userInfo:;
- (id)init;
- (void)setStage:;
- (void)dealloc;
- (unsigned long long)stage;
- (void)setup;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
+ (id)sharedInstance;
@end
