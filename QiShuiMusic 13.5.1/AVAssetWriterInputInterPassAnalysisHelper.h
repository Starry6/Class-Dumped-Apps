@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper
- (BOOL)canPerformMultiplePasses;
- (void)dealloc;
- (id)currentPassDescription;
- (BOOL)isReadyForMoreMediaData;
- (void)markCurrentPassAsFinished;
- (void)requestMediaDataWhenReadyOnQueue:usingBlock:;
- (id)pixelBufferPool;
- (void)stopRequestingMediaData;
- (void)markAsFinished;
- (long long)appendSampleBuffer:error:;
- (BOOL)appendPixelBuffer:withPresentationTime:;
- (long long)status;
- (id)initWithConfigurationState:;
- (id)initWithWritingHelper:;
- (void)startPassAnalysis;
- (BOOL)shouldRespondToInitialPassDescription;
@end
