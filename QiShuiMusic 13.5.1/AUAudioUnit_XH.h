@interface AUAudioUnit_XH : AUAudioUnit_XPC
@property (nonatomic) AUAudioUnit_XPC strongInstance;
- (void)setStrongInstance:;
- (void)dealloc;
- (void)_internalInitWithExtension:componentDescription:instance:completion:;
- (void)setSpeechSynthesisOutputMetadataBlock:;
- (void)requestViewControllerWithCompletionHandler:;
- (id)speechSynthesisOutputMetadataBlock;
- (void)_doOpen:completion:;
- (void).cxx_destruct;
- (id)strongInstance;
+ (void)instantiateWithExtension:componentDescription:instance:options:completionHandler:;
@end
