@interface AWDWiFiDPSBTSnapshot : PBCodable
@property (nonatomic) BOOL hasTs;
@property (nonatomic) Q ts;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) I duration;
@property (nonatomic) BOOL hasUse;
@property (nonatomic) I use;
- (BOOL)hasDuration;
- (unsigned long long)ts;
- (void)setHasDuration:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setTs:;
- (unsigned int)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)use;
- (void)setHasTs:;
- (BOOL)hasTs;
- (void)setUse:;
- (void)setHasUse:;
- (BOOL)hasUse;
@end
