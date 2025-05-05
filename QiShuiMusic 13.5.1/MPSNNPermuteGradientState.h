@interface MPSNNPermuteGradientState : MPSNNGradientState
- (id)initWithResource:;
+ (id)temporaryStateWithCommandBuffer:;
@end
