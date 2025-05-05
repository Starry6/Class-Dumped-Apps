@interface CKDPDate : PBCodable
@property (nonatomic) BOOL hasTime;
@property (nonatomic) double time;
- (void)setTime:;
- (double)time;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasTime:;
- (BOOL)hasTime;
@end
