@interface WebAVAudioSessionAvailableInputsListener : NSObject
- (void)invalidate;
- (void)routeDidChange:;
- (id)initWithCallback:audioSession:;
@end
