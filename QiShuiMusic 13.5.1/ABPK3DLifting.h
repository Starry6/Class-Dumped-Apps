@interface ABPK3DLifting : NSObject
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
- (id)get3DLiftingResultsAsModelPoses;
- (void)_adjustBoneLength:;
- (void)_transformRelativeToHip:count:;
- (void)_startLoading3DLiftingMLModelSignpost;
- (void)_endLoading3DLiftingMLModelSignpost;
- (void)_startPrepareLiftingInputSignpostWithTimestamp:;
- (void)_endPrepareLiftingInputSignpostWithTimestamp:;
- (void)_startPostProcessDataSignpostWithTimestamp:;
- (void)_endPostProcessDataSignpostWithTimestamp:;
- (void)_startRunLiftingModelSignpostWithTimestamp:;
- (void)_endRunLiftingModelSignpostWithTimestamp:;
@end
