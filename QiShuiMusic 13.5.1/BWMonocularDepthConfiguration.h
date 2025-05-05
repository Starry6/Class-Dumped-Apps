@interface BWMonocularDepthConfiguration : BWInferenceConfiguration
@property (nonatomic) I monocularDepthType;
@property (nonatomic) q depthPrioritization;
- (id)initWithInferenceType:monocularDepthType:;
- (unsigned int)monocularDepthType;
- (long long)depthPrioritization;
@end
