@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput
@property (nonatomic) <AVPlayerItemSampleBufferOutputDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (id)delegateQueue;
- (id)delegate;
- (id)initWithConfiguration:;
- (void)setDelegate:queue:;
- (int)_extractionID;
- (void)_setExtractionID:;
- (int)_trackID;
- (void)_addFigPlaybackItemListeners;
- (void)_removeFigPlaybackItemListeners;
- (id)_figPlaybackItem;
- (void)_setFigPlaybackItem:;
- (id)_weakReferenceToPlayerItemTrack;
- (id)copyNextSampleBufferForTrackID:flags:;
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:extractionID:;
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:extractionID:;
- (double)_advanceInterval;
- (void)_attachToPlayerItemTrack:figPlaybackItem:;
- (void)_detachFromPlayerItemTrack;
- (void)_setTrackID:;
@end
