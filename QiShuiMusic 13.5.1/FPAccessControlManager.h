@interface FPAccessControlManager : NSObject
- (void)collectionForItemsAccessibleByBundleIdentifier:completionHandler:;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:;
- (void)_killBundle:completionHandler:;
- (void)revokeAccessToAllItemsForBundle:completionHandler:;
- (BOOL)revokeAccessToAllBundles;
- (void)revokeAccessToAllBundlesCompletionHandler:;
@end
