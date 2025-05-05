@interface BWInferenceDependencyProvider : NSObject
@property (nonatomic) NSMapTable dependenciesByInputVideoRequirements;
@property (nonatomic) NSMapTable dependenciesByOutputVideoRequirements;
@property (nonatomic) NSDictionary providedVideoRequirementsByAttachedMediaKey;
@property (nonatomic) NSSet consumedVideoAttachedMediaKeys;
@property (nonatomic) NSArray allInputVideoDependencies;
@property (nonatomic) NSArray allOutputVideoDependencies;
@property (nonatomic) NSInteger supportedPixelBufferCompressionType;
- (id)init;
- (void)dealloc;
- (void)setProvidedVideoRequirementsByAttachedMediaKey:;
- (id)allInputVideoDependencies;
- (id)dependenciesForOutputVideoRequirement:;
- (id)allOutputVideoDependencies;
- (id)dependenciesByOutputVideoRequirements;
- (void)setSupportedPixelBufferCompressionType:;
- (id)consumedVideoAttachedMediaKeys;
- (id)providedVideoRequirementsByAttachedMediaKey;
- (id)description;
- (id)dependenciesByInputVideoRequirements;
- (void)setConsumedVideoAttachedMediaKeys:;
- (int)supportedPixelBufferCompressionType;
- (id)dependenciesForInputVideoRequirement:;
@end
