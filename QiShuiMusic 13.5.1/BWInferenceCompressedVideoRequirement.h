@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement
@property (nonatomic) BWInferenceVideoRequirement uncompressedRequirement;
- (void)dealloc;
- (BOOL)isSatisfiedByRequirement:;
- (id)uncompressedRequirement;
- (unsigned long long)satisfactionHash;
- (id)copyWithZone:;
+ (id)newRequirementWithUncompressedRequirement:supportedCompressionType:supportedLossyCompressionLevel:;
@end
