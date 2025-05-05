@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique
@property (nonatomic) ABPK2DDetectionResult abpkPrevious3DSkeleton;
- (id)processData:;
- (void).cxx_destruct;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (double)requiredTimeInterval;
- (id)abpkPrevious3DSkeleton;
- (void)_process2DSkeletonRawEspressoResultInBackground:;
@end
