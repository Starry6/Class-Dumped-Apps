@interface CLPLOGENTRYVISIONSimdDoubleM : PBCodable
@property (nonatomic) Q valuesCount;
@property (nonatomic) ^d values;
- (void)dealloc;
- (id)values;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)clearValues;
- (void)copyTo:;
- (void)mergeFrom:;
- (unsigned long long)valuesCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addValues:;
- (double)valuesAtIndex:;
- (void)setValues:count:;
@end
