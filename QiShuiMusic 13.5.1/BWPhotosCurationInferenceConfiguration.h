@interface BWPhotosCurationInferenceConfiguration : BWVisionInferenceConfiguration
@property (nonatomic) NSInteger semanticDevelopmentVersion;
- (int)semanticDevelopmentVersion;
- (id)initWithInferenceType:;
- (void)setSemanticDevelopmentVersion:;
+ (id)configuration;
@end
