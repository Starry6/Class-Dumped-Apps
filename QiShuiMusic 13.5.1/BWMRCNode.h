@interface BWMRCNode : BWNode
@property (nonatomic) <BWMetadataDetectedResultsObserver> detectedResultsObserver;
- (BOOL)lowPowerModeEnabled;
- (id)init;
- (void)dealloc;
- (id)rectOfInterest;
- (void)setLowPowerModeEnabled:;
- (void)setRectOfInterest:;
- (id)mrcIdentifiers;
- (id)nodeType;
- (void)setDetectedResultsObserver:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (id)detectedResultsObserver;
- (void)setMrcIdentifiers:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
