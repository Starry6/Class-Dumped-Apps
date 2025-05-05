@interface BWVideoDefringingNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithSensorIDString:portType:propagateSynchronizedSlaveFrame:isSlomo:;
@end
