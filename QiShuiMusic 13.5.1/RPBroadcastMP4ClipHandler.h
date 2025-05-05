@interface RPBroadcastMP4ClipHandler : RPBroadcastHandler
- (void)beginRequestWithExtensionContext:;
- (void)processMP4ClipWithURL:setupInfo:finished:;
- (void)finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:error:;
@end
