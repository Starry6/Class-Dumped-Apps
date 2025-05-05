@interface AWDSOSTriggered : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTriggerMechanism;
@property (nonatomic) I triggerMechanism;
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
- (unsigned int)triggerMechanism;
- (void)setTriggerMechanism:;
- (void)setHasTriggerMechanism:;
- (BOOL)hasTriggerMechanism;
@end
