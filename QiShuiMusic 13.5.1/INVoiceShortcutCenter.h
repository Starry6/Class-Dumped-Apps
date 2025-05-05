@interface INVoiceShortcutCenter : NSObject
@property (nonatomic) <INVCVoiceShortcutClient> voiceShortcutClient;
- (id)init;
- (void).cxx_destruct;
- (void)getVoiceShortcutWithIdentifier:completion:;
- (id)_initWithVoiceShortcutClient:;
- (void)getAllVoiceShortcutsWithCompletion:;
- (void)setShortcutSuggestions:;
- (id)voiceShortcutClient;
- (void)_setVoiceShortcutClient:;
+ (id)sharedCenter;
@end
