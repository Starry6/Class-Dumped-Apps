@interface SiriTTSSynthesisEngineResource : NSObject
@property (nonatomic) {shared_ptr<SiriTTS::VoiceResource>=^{VoiceResource}^{__shared_weak_count}} handle;
@property (nonatomic) NSString path;
@property (nonatomic) NSString mimeType;
- (id)path;
- (void)setPath:;
- (id)handle;
- (void)setHandle:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:;
- (id).cxx_construct;
@end
