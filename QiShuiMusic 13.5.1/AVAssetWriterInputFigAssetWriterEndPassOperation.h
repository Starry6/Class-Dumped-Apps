@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation
@property (nonatomic) AVAssetWriterInputPassDescription descriptionForNextPass;
- (id)init;
- (void)dealloc;
- (void)start;
- (BOOL)isAsynchronous;
- (id)initWithFigAssetWriter:trackID:;
- (void)_notifyWhetherMorePassesAreNeeded:timeRanges:forTrackWithID:;
- (id)descriptionForNextPass;
@end
