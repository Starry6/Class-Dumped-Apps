@interface SiriTTSAudioRequest : SiriTTSBaseRequest
@property (nonatomic) SiriTTSAudibleContext audibleContext;
@property (nonatomic) SiriTTSAudioData audio;
@property (nonatomic) SiriTTSAudibleContext audibleContext;
@property (nonatomic) NSString description;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)audio;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:;
- (BOOL)immediate;
- (void)setImmediate:;
- (id)siriRequestId;
- (void)setSiriRequestId:;
- (id)didStartSpeaking;
- (void)setDidStartSpeaking:;
- (id)audibleContext;
- (void)setAudibleContext:;
- (id)initWithAudio:;
+ (BOOL)supportsSecureCoding;
@end
