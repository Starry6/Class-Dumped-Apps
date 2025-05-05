@interface AWDSiriVoiceRecordingEnd : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) Q duration;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
