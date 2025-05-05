@interface AWDIDSLocalMessageTimedOut : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) q expirationDate;
- (void)setHasExpirationDate:;
- (BOOL)hasExpirationDate;
- (void)writeTo:;
- (void)setExpirationDate:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (long long)expirationDate;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
