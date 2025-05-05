@interface BWHDRNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setAttachesInputBracketToOutputSampleBuffer:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (void)setAlwaysRequestsPreBracketedEV0:;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (id)initWithClientPID:sensorIDDictionary:;
- (id)_initWithClientPID:sensorIDDictionary:sbpCreationFunction:;
- (void)setSupportsStereoFusionCaptures:;
- (BOOL)supportsStereoFusionCaptures;
@end
