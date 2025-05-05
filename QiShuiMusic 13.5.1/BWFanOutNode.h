@interface BWFanOutNode : BWNode
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)makeCurrentConfigurationLive;
- (id)initWithFanOutCount:mediaType:;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)setDiscardsAttachedMedia:forOutputIndex:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
