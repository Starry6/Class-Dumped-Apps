@interface AWEIMConversationKVCacheManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) WCTDatabase database;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)__prepare;
- (void)__async:;
- (id)__sync:;
- (id)kVPairsForConversationId:;
- (void)__tryRebuildDB;
- (BOOL)__createTable;
- (void)asyncSaveObjects:;
- (void)asyncGetKVPairsForConversationId:completion:;
- (void)setDatabase:;
- (id)database;
- (id)init;
- (void)dealloc;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)dbFilePath;
@end
