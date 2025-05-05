@interface MLPipeline : MLModel
@property (nonatomic) NSArray models;
@property (nonatomic) NSArray modelNames;
- (void)setModels:;
- (id)parameterValueForKey:error:;
- (id)modelNames;
- (void)replaceModelAtIndex:with:;
- (id)initModelFromMetadataAndArchive:versionInfo:description:configuration:error:;
- (id)predictionFromFeatures:options:error:;
- (void)setModelNames:;
- (BOOL)writeToURL:error:;
- (id)predictionsFromBatch:options:error:;
- (id)executionSchedule;
- (id)models;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (id)extractModelNamesFromArchive:numModels:;
- (id)initWithModels:modelNames:description:configuration:;
- (void).cxx_destruct;
+ (void)archiveCustomModelNames:to:;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (id)classLabelsForPipelineFromSubModelArray:predictedFeatureName:;
+ (id)compileWithModelsInPipeline:toArchive:options:updatable:error:;
+ (void)archivePipelineUpdateParameterForModels:to:updatable:;
+ (BOOL)archivePipelineModelDetailsFrom:toArchive:error:;
@end
