@interface BWRefinedCinematographyNode : BWNode
- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
