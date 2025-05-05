@interface BWDepthRotatorNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithRotationDegrees:separateDepthComponentsEnabled:depthProvidedAsAttachedMedia:;
@end
