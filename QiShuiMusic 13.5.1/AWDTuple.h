@interface AWDTuple : PBCodable
@property (nonatomic) BOOL hasUpDuration;
@property (nonatomic) Q upDuration;
@property (nonatomic) BOOL hasDownDuration;
@property (nonatomic) Q downDuration;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setUpDuration:;
- (void)setHasUpDuration:;
- (BOOL)hasUpDuration;
- (void)setDownDuration:;
- (void)setHasDownDuration:;
- (BOOL)hasDownDuration;
- (unsigned long long)upDuration;
- (unsigned long long)downDuration;
@end
