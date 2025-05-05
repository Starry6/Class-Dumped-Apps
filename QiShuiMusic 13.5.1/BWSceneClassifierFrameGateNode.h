@interface BWSceneClassifierFrameGateNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithMaxOutputFrameRate:;
- (void)setDiscardsBlurryFrames:;
- (BOOL)discardsBlurryFrames;
@end
