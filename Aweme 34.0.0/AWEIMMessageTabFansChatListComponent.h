@interface AWEIMMessageTabFansChatListComponent : AWEIMMessageTabCustomDataBaseListComponent
- (id)createDataController;
- (id)viewControllerIdentify;
- (BOOL)canShowHeaderInCurrentViewController;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (long long)currentWrapperType;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (long long)unreadCount;
- (long long)entryType;
- (id)title;
- (long long)indicatorType;
- (id)trackName;
+ (BOOL)canCreateComponentWithContext:;
@end
