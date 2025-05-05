@interface FBSApplicationDataStoreClientFactory : NSObject
@property (nonatomic) NSArray prefetchedKeys;
- (id)init;
- (id)checkout;
- (void)checkin;
- (void).cxx_destruct;
- (void)setPrefetchedKeys:;
- (id)prefetchedKeys;
+ (BOOL)isServerProcess;
+ (id)sharedInstance;
@end
