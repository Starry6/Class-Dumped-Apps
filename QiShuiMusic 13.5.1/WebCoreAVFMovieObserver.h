@interface WebCoreAVFMovieObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)disconnect;
- (id)initWithPlayer:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)metadataCollector:didCollectDateRangeMetadataGroups:indexesOfNewGroups:indexesOfModifiedGroups:;
- (void)outputSequenceWasFlushed:;
- (void)metadataOutput:didOutputTimedMetadataGroups:fromPlayerItemTrack:;
- (void)legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:;
- (void)chapterMetadataDidChange:;
- (void)didEnd:;
- (void)metadataLoaded;
@end
