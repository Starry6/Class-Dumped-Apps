@interface AWDWifiAwdlStateInfo : PBCodable
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) Q duration;
- (void)setCount:;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (unsigned long long)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
@end
