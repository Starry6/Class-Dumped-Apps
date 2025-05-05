@interface AWDSOSLongPressTriggersEmergencySOS : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasLongPressTriggersEmergencySOS;
@property (nonatomic) BOOL longPressTriggersEmergencySOS;
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
- (BOOL)longPressTriggersEmergencySOS;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setLongPressTriggersEmergencySOS:;
- (id)copyWithZone:;
- (void)setHasLongPressTriggersEmergencySOS:;
- (BOOL)hasLongPressTriggersEmergencySOS;
@end
