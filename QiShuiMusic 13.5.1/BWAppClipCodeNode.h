@interface BWAppClipCodeNode : BWNode
@property (nonatomic) <BWMetadataDetectedResultsObserver> detectedResultsObserver;
- (void)dealloc;
- (id)initWithProcessingQueuePriority:;
- (id)nodeType;
- (void)setDetectedResultsObserver:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (id)detectedResultsObserver;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
