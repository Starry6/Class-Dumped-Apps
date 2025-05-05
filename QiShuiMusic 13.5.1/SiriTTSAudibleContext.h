@interface SiriTTSAudibleContext : NSObject
@property (nonatomic) I audioSessionId;
@property (nonatomic) BOOL immediate;
@property (nonatomic) NSUUID siriRequestId;
@property (nonatomic) @? didStartSpeaking;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:;
- (BOOL)immediate;
- (void)setImmediate:;
- (id)siriRequestId;
- (void)setSiriRequestId:;
- (id)didStartSpeaking;
- (void)setDidStartSpeaking:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
