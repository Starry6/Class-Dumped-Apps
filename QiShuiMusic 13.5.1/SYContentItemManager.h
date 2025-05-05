@interface SYContentItemManager : NSObject
- (void)navigateToContentItem:completion:;
- (void)_navigateToUserActivity:completion:;
- (void)_navigateToURL:completion:;
- (void)fetchLinkableContentItemsWithCompletion:;
+ (id)sharedManager;
@end
