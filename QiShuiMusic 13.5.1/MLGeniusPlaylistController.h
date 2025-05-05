@interface MLGeniusPlaylistController : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tracksFromClusterForCount:error:;
- (id)_sharedBlobMutableData;
- (BOOL)_canIncludeTrackInGeniusContainer:;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:maxTracks:stride:;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:withSeedTrack:error:;
- (BOOL)_onBackgroundQueue_populateContainer:seedTrack:error:;
- (BOOL)_createClusterPlaylistWithSeedTracks:error:;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:error:;
+ (BOOL)hasGeniusDataAvailable;
+ (BOOL)hasGeniusFeatureEnabled;
+ (id)playlistControllerWithSeedTracks:error:;
+ (void)populateContainer:withSeedTrack:completionBlock:;
+ (id)geniusTracksForSeedTrack:error:;
+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (void)ignoreUnusedWarnings;
+ (BOOL)useFakeGeniusData;
@end
