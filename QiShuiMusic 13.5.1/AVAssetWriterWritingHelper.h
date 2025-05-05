@interface AVAssetWriterWritingHelper : AVAssetWriterHelper
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:error:;
- (void)dealloc;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:;
- (id)figTrackReferences;
- (void)cancelWriting;
- (void)finishWritingWithCompletionHandler:;
- (void)finishWriting;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:;
- (id)_retainedFigAssetWriter;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:preferredOutputSegmentInterval:returningDebugDescription:;
- (id)initWithConfigurationState:assetWriter:;
- (void)flush;
- (void)flushSegment;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:;
- (id)initWithConfigurationState:assetWriter:error:;
- (long long)status;
- (void)endSessionAtSourceTime:;
- (void)transitionToFailedStatusWithError:;
- (void)startSessionAtSourceTime:;
+ (id)prepareInputsOperationsWithInputs:;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:;
+ (id)finishWritingDelegateOperationWithAssetWriter:andFigAssetWriter:andDelegate:;
@end
