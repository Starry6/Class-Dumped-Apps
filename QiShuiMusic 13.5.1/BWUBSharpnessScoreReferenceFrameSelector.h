@interface BWUBSharpnessScoreReferenceFrameSelector : NSObject
- (void)dealloc;
- (id)initWithCommandQueue:externalMemoryResource:candidateCount:;
- (id)addReferenceFrameCandidate:referenceFrameOut:;
+ (id)externalMemoryDescriptorWithMaxInputDimensions:;
@end
