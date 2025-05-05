@interface HSAccountStore : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSString groupID;
@property (nonatomic) ICURLRequest groupIDRequest;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString password;
- (void)clearCaches;
- (id)appleID;
- (void)setGroupID:;
- (id)groupID;
- (void)setPassword:;
- (id)init;
- (id)password;
- (id)groupIDRequest;
- (void)dealloc;
- (void)clearGroupID;
- (void)clearAllCredentials;
- (void)setAppleID:;
- (void)determineGroupIDWithCompletionHandler:;
- (void)setGroupIDRequest:;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:;
- (void).cxx_destruct;
- (void)setQueue:;
- (BOOL)canDetermineGroupID;
- (id)queue;
+ (id)defaultStore;
@end
