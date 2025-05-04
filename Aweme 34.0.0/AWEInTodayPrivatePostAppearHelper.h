@interface AWEInTodayPrivatePostAppearHelper : NSObject
+ (BOOL)hasEnterInToday;
+ (BOOL)hasAuthorizationAggregatePhotoLibrary;
+ (BOOL)shieldedInTodayEntranceInPrivateTab;
+ (void)updateInTodayCoverTypeInPrivateTab:;
+ (void)recordEnterPlayer;
+ (id)appendUserIdWithCacheKey:;
+ (void)cacheInTodayRequestDataWithCoverId:coverType:schema:;
+ (void)cacheInTodayDate;
+ (id)getCachedInTodayRequestData;
+ (BOOL)hasRequestInToday;
+ (BOOL)needUpdateInToday;
@end
