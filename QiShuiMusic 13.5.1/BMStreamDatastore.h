@interface BMStreamDatastore : BMStreamDatastoreBase
@property (nonatomic) BOOL includeTombstones;
- (void)didMarkFrameAsRemovedWithSegmentName:frame:reason:outTombstoneBookmark:;
- (id)initForWritingWithStream:config:includeTombstones:;
- (void)writeTombstoneEventWithSegmentName:offset:length:reason:outTombstoneBookmark:;
- (id)initWithStream:permission:config:includeTombstones:;
- (id)initWithStream:streamPath:permission:config:includeTombstones:;
- (id)newTombstoneEnumeratorFromBookmark:;
- (BOOL)updatePruningPolicy:;
- (void).cxx_destruct;
- (BOOL)includeTombstones;
- (id)tombstoneStore;
- (id)initForPruningWithStream:config:includeTombstones:;
- (void)writeTombstoneEventWithSegmentName:offset:length:reason:;
- (id)newTombstoneEnumeratorFromStartTime:;
- (id)initForReadingWithStream:config:includeTombstones:;
@end
