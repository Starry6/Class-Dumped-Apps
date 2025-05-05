@interface BWPhotoDecompressorNode : BWNode
- (void)suspendResources;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (void)addEmitSampleBufferSemaphore:;
- (id)nodeType;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)downstreamIsSharingOutputPool;
- (void)setDownstreamIsSharingOutputPool:;
- (id)nodeSubType;
@end
