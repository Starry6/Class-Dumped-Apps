@interface SynthesisGridNet : EspressoModel
- (id)initWithMode:;
- (void)dealloc;
- (BOOL)synthesizeFrameFromFeatureForward:backward:destination:pyramidStartLevel:callback:;
@end
