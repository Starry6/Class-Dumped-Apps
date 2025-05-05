@interface BWSynchronizerNode : BWNode
- (void)setMasterClock:;
- (void)setSourceClock:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (id)sourceClock;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:forInput:;
- (id)masterClock;
- (id)initWithMediaType:;
- (id)nodeSubType;
@end
