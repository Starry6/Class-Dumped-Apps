@interface MPSNNConcatenationGradientState : MPSNNGradientState
- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:;
+ (id)temporaryStateWithCommandBuffer:;
@end
