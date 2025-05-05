@interface AWEIMCloudCommandConversationCheck : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canDealConversationCheck;
- (void)forceCheckConversationListIntegrityIfNeed;
- (void)iesim_chatDidUpdate:;
- (void)iesim_chatListDidUpdateWithDeletedChats:insertedChats:firstPage:reason:;
- (void)iesim_didEndPullOfflineMessagesWithHasMore:userInfo:;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)iesim_totalUnreadCountUpdate:;
- (unsigned long long)stage;
- (id)init;
- (void)dealloc;
- (void)setStage:;
- (void)setup;
+ (id)cloudCommandIdentifier;
+ (id)createInstance;
+ (id)sharedInstance;
@end
