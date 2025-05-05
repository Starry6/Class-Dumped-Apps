@interface AWDSOSNumberOfVoiceLoops : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasNumberOfVoiceLoops;
@property (nonatomic) Q numberOfVoiceLoops;
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
- (void)setNumberOfVoiceLoops:;
- (void)setHasNumberOfVoiceLoops:;
- (BOOL)hasNumberOfVoiceLoops;
- (unsigned long long)numberOfVoiceLoops;
@end
