@interface OPTTSMutableTextToSpeechVoiceResource : OPTTSTextToSpeechVoiceResource
@property (nonatomic) q type;
@property (nonatomic) NSData data;
- (id)init;
- (id)data;
- (void)setType:;
- (long long)type;
- (void)setData:;
- (id)copyWithZone:;
- (void)data:;
@end
