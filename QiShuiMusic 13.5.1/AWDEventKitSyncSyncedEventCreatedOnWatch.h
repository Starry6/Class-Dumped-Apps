@interface AWDEventKitSyncSyncedEventCreatedOnWatch : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDeltaTransitTime;
@property (nonatomic) Q deltaTransitTime;
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
- (void)setDeltaTransitTime:;
- (void)setHasDeltaTransitTime:;
- (BOOL)hasDeltaTransitTime;
- (unsigned long long)deltaTransitTime;
@end
