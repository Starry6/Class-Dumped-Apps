@interface BWStillImageFocusPixelDisparityNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithNodeConfiguration:sensorConfiguration:disparityMapWidth:disparityMapHeight:depthIsAlwaysHighQuality:;
@end
