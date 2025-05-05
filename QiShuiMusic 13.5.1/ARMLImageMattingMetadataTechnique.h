@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique
@property (nonatomic) BOOL shouldOperateOnHighResolutionImages;
- (id)init;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_processDataInBackgound:;
- (id)_generateMattingMetadata:;
- (BOOL)shouldOperateOnHighResolutionImages;
- (void)setShouldOperateOnHighResolutionImages:;
@end
