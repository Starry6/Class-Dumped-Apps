@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput
@property (nonatomic) <AVPlayerItemLegibleOutputPushDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;
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
- (void)setSuppressesPlayerRendering:;
- (BOOL)suppressesPlayerRendering;
- (id)textStylingResolution;
- (id)initWithMediaSubtypesForNativeRepresentation:;
- (id)initWithDependencyFactory:mediaSubtypesForNativeRepresentation:;
- (void)_pushAttributedStrings:andSampleBuffers:atItemTime:;
- (id)_figLegibleOutputsDictionaryOptions;
- (void)setTextStylingResolution:;
@end
