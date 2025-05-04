@interface AWESearchMusicCollectionSyncHelper : NSObject
- (void)musicDidChangeFavoriteStatus:;
- (id)init;
- (void)dealloc;
+ (id)weakShared;
@end
