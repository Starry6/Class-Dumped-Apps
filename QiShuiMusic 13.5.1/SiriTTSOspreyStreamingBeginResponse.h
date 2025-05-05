@interface SiriTTSOspreyStreamingBeginResponse : NSObject
@property (nonatomic) NSString voiceLanguage;
@property (nonatomic) NSString voiceName;
@property (nonatomic) NSString voiceFootprint;
@property (nonatomic) NSString voiceType;
@property (nonatomic) NSString voiceGender;
@property (nonatomic) q voiceVersion;
@property (nonatomic) NSString resourceLanguage;
@property (nonatomic) q resourceVersion;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) double bufferDuration;
- (long long)resourceVersion;
- (void).cxx_destruct;
- (id)voiceType;
- (id)voiceLanguage;
- (id)voiceName;
- (id)asbd;
- (id)initWithOspreyBeginResponse:;
- (id)voiceFootprint;
- (id)voiceGender;
- (long long)voiceVersion;
- (id)resourceLanguage;
- (double)bufferDuration;
@end
