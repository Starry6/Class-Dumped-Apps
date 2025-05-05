@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:;
- (BOOL)isReadyForMoreMediaData;
- (void)markCurrentPassAsFinished;
- (void)requestMediaDataWhenReadyOnQueue:usingBlock:;
- (id)initWithConfigurationState:terminalStatus:;
- (void)stopRequestingMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:;
- (void)markAsFinished;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (long long)appendSampleBuffer:error:;
- (BOOL)appendPixelBuffer:withPresentationTime:;
- (long long)status;
- (id)initWithConfigurationState:;
@end
