@interface DESBinary32Transport : PBCodable
@property (nonatomic) Q datasCount;
@property (nonatomic) ^f datas;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (float)dataAtIndex:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)addData:;
- (id)copyWithZone:;
- (id)datas;
- (unsigned long long)datasCount;
- (void)clearDatas;
- (void)setDatas:count:;
@end
