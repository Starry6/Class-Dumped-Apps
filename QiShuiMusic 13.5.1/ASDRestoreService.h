@interface ASDRestoreService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)clearFollowupsForAccountID:withCompletionHandler:;
- (void)estimateTotalDownloadSizeWithCompletionHandler:;
- (void)prioritizeBundleIDs:userInitiated:withCompletionHandler:;
+ (id)interface;
+ (id)sharedInstance;
@end
