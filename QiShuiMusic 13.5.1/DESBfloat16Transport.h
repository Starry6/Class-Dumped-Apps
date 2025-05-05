@interface DESBfloat16Transport : PBCodable
@property (nonatomic) BOOL hasData;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
- (void)setCount:;
- (id)data;
- (void)writeTo:;
- (BOOL)hasData;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setData:;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
@end
