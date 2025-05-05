@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector
@property (nonatomic) <AVPlayerItemMetadataCollectorPushDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (void)_detatchFromPlayerItem;
- (id)delegateQueue;
- (id)delegate;
- (void)_updateTaggedRangeMetadataArray:;
- (void)setDelegate:queue:;
- (BOOL)_attachToPlayerItem:;
- (id)initWithIdentifiers:classifyingLabels:;
- (BOOL)_isAttachedToPlayerItem;
- (id)_getFilteredMetadataGroups:fromIdentifiers:andClassifyingLabels:modifiedIndexesOut:newIndexesOut:;
@end
