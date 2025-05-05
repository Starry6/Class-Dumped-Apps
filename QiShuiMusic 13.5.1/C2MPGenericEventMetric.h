@interface C2MPGenericEventMetric : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) C2MPGenericEventMetricValue value;
- (BOOL)hasKey;
- (BOOL)hasValue;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
