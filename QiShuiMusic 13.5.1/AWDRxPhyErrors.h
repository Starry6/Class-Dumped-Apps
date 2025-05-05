@interface AWDRxPhyErrors : PBCodable
@property (nonatomic) BOOL hasRfdisable;
@property (nonatomic) Q rfdisable;
@property (nonatomic) BOOL hasBphyRxcrsglitch;
@property (nonatomic) Q bphyRxcrsglitch;
@property (nonatomic) BOOL hasBphyBadplcp;
@property (nonatomic) Q bphyBadplcp;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRfdisable:;
- (void)setHasRfdisable:;
- (BOOL)hasRfdisable;
- (void)setBphyRxcrsglitch:;
- (void)setHasBphyRxcrsglitch:;
- (BOOL)hasBphyRxcrsglitch;
- (void)setBphyBadplcp:;
- (void)setHasBphyBadplcp:;
- (BOOL)hasBphyBadplcp;
- (unsigned long long)rfdisable;
- (unsigned long long)bphyRxcrsglitch;
- (unsigned long long)bphyBadplcp;
@end
