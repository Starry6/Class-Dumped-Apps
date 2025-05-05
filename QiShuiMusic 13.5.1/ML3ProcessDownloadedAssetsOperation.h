@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation
- (unsigned long long)type;
- (BOOL)_execute:;
- (id)initWithLibrary:writer:;
- (BOOL)_processTrackAsset:forSource:withError:;
- (BOOL)_processContainerAsset:forSource:withError:;
- (BOOL)_processArtworkIdentifier:artworkToken:artworkType:mediaType:sourceType:;
- (double)_videoSnapshotTimeForMediaType:;
- (BOOL)_processGeniusPlist:geniusIDString:geniusChecksum:;
- (long long)_artworkSourceFromTrackSource:;
@end
