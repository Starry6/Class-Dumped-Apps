@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput
@property (nonatomic) NSDictionary figMetadataOutputsDictionaryOptions;
@property (nonatomic) <AVPlayerItemMetadataOutputPushDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;
- (id)initWithIdentifiers:;
- (id)init;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)delegateQueue;
- (id)delegate;
- (void)setDelegate:queue:;
- (BOOL)_attachToPlayerItem:;
- (void)_detachFromPlayerItem;
- (double)advanceIntervalForDelegateInvocation;
- (void)setAdvanceIntervalForDelegateInvocation:;
- (void)_signalFlush;
- (id)_figMetadataOutputsDictionaryOptions;
- (void)_pushTimedMetadataGroups:fromPlayerItemTrack:;
@end
