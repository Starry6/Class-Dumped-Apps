@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement
@property (nonatomic) BWInferenceVideoRequirement sourceVideoRequirement;
- (id)videoFormat;
- (void)dealloc;
- (id)initWithAttachedMediaKey:sourceVideoRequirement:;
- (id)description;
- (id)initWithCloneVideoRequirement:;
- (id)sourceVideoRequirement;
- (id)copyWithZone:;
@end
