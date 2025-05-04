@interface AWERecordModeHelperImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isTakingPicturingModeSupportShootingVideoWithModeId:;
- (BOOL)shouldSwapPhotoModeAndVideoMode;
- (BOOL)isDefaultToPhotoModeForEveryLanding;
- (BOOL)isOnlyStoreRecordModeInPlusEntranceABOn;
- (long long)getCachedStoryCombinedRecordMode;
- (BOOL)isDefaultToPhotoModeForFirstLanding;
- (void)markFirstLandingHasLandedToPhotoMode;
- (long long)getCachedCombinedRecordMode;
- (BOOL)isValidYoungerThan24User;
- (id)appendUserIdToKey:;
- (BOOL)isStoreCombinedRecordModeABOn;
- (long long)getCachedRecordModeForKey:;
- (void)storeRecordModeIntoCacheIfNeeded:;
- (BOOL)isStoreStoryCombinedRecordModeABOn;
@end
