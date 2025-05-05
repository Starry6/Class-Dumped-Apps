@interface AWDSiriSpeechRecognized : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDurationFromVoiceRecordingEnd;
@property (nonatomic) Q durationFromVoiceRecordingEnd;
@property (nonatomic) BOOL hasDurationFromVoiceSendEnd;
@property (nonatomic) Q durationFromVoiceSendEnd;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setDurationFromVoiceRecordingEnd:;
- (void)setHasDurationFromVoiceRecordingEnd:;
- (BOOL)hasDurationFromVoiceRecordingEnd;
- (void)setDurationFromVoiceSendEnd:;
- (void)setHasDurationFromVoiceSendEnd:;
- (BOOL)hasDurationFromVoiceSendEnd;
- (unsigned long long)durationFromVoiceRecordingEnd;
- (unsigned long long)durationFromVoiceSendEnd;
@end
