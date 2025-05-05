@interface ICIAMSerialCheckResponse : PBCodable
@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) q commandSerialNumber;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCommandSerialNumber:;
- (void)setHasCommandSerialNumber:;
- (BOOL)hasCommandSerialNumber;
- (long long)commandSerialNumber;
@end
