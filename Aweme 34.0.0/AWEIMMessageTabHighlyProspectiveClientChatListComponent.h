@interface AWEIMMessageTabHighlyProspectiveClientChatListComponent : AWEIMMessageTabCustomDataBaseListComponent
- (id)createDataController;
- (id)viewControllerIdentify;
- (id)viewControllerforSkeleton;
- (BOOL)canShowHeaderInCurrentViewController;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (long long)currentWrapperType;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (void)setupIndicatorModel:;
- (long long)unreadCount;
- (long long)entryType;
- (id)title;
- (long long)indicatorType;
- (id)trackName;
+ (BOOL)canCreateComponentWithContext:;
@end
