@interface VCSpeechFrameworkWrapper : NSObject
@property (nonatomic) BOOL frameworkLoaded;
- (id)init;
- (id)supportedLocales;
- (id)findSpeechFrameworkPath;
- (BOOL)loadSpeechFramework;
- (id)newSFSpeechRecognizerWithLocale:;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (BOOL)frameworkLoaded;
+ (id)defaultSpeechFrameworkWrapper;
@end
