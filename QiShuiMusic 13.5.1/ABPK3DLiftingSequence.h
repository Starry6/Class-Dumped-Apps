@interface ABPK3DLiftingSequence : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)runLiftingModelWithData:atTimestamp:;
- (id)getLiftingResults;
- (BOOL)initMLNetwork;
- (void)updateInputImageResolution:;
- (int)runLiftingModelWithData:imageResolution:deviceOrientation:atTimestamp:;
- (int)runLiftingModelWithBuffer:with2DReferenceResults:atTimestamp:exportDebuggingData:;
- (id)getGaussianSmoothedOutput:;
- (id)get3DLiftingResultsAsModelPoses;
- (void)saveDataToFilePath:with2DInputBuffer:withFirstStageOutput:withSmoothedOutput:withPostprocessedLiftingResults:;
- (void)_adjustBoneLength:;
- (void)_startLoading3DLiftingSequenceMLModelSignpost;
- (void)_endLoading3DLiftingSequenceMLModelSignpost;
- (void)_startPrepareLiftingSequenceInputSignpostWithTimestamp:;
- (void)_endPrepareLiftingSequenceInputSignpostWithTimestamp:;
- (void)_startPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:;
- (void)_endPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:;
- (void)_startRunLiftingSequenceModelSignpostWithTimestamp:;
- (void)_endRunLiftingSequenceModelSignpostWithTimestamp:;
@end
