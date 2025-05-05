@interface RPStoreManager : NSObject
- (void)loadItemDetailsForBundleIdentifier:completionHandler:;
+ (id)sharedManager;
@end
