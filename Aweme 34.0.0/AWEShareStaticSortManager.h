@interface AWEShareStaticSortManager : NSObject
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)sortChannels:usingSorting:;
- (void)sortChannels:withContext:;
- (id)sortingForShareChannelsWithContext:;
- (id)sortingForActionChannelsWithContext:;
- (id)defaultShareSorting;
- (void)updateSorting:forShareChannelsWithContext:;
- (id)serverActionSortingForAweme;
- (id)defaultActionSortingForAweme;
- (id)defaultActionSortingForDetailPage;
- (id)defaultActionSortingForGoodsShare;
- (id)defaultActionSortingForLive;
- (id)defaultActionSortingForNonAweme;
- (void)updateSorting:forActionChannelsWithContext:;
- (long long)addWechatFriendsIndex;
- (long long)contactFriendsIndex;
- (void)insertType:sorting:index:;
- (id)recommendActionSortingForAweme;
- (id)defaultModalActionSortingForAwemeGuest;
- (id)defaultModalLongPressActionSortingForAwemeGuest;
- (id)defaultModalActionSortingForAwemeHost;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
+ (id)sharedManager;
@end
