@interface LPAnimatedImageTranscoder : NSObject
- (void)cancel;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)failed;
- (id)initWithAnimatedImage:;
- (void)transcodeWithCompletionHandler:;
- (void)_transcodeWithCompletionHandler:;
- (void)removeReadyForDataObserverIfNeeded;
- (void)encodeUntilNotReadyForMoreMediaData;
- (void)encodeNextFrame;
+ (id)encodeQueue;
@end
