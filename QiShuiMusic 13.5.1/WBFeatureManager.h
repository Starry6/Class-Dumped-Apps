@interface WBFeatureManager : NSObject
@property (nonatomic) q accessLevel;
@property (nonatomic) BOOL offlineReadingListAvailable;
@property (nonatomic) BOOL favoritesFolderSelectionShouldSync;
- (id)init;
- (BOOL)isOfflineReadingListAvailable;
- (long long)accessLevel;
- (void)_updateToAccessLevel:;
- (BOOL)favoritesFolderSelectionShouldSync;
+ (id)sharedFeatureManager;
@end
