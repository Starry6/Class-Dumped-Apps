@interface CPLServerFeedbackMessage : PBCodable
@property (nonatomic) NSMutableArray keysAndValues;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearKeysAndValues;
- (void)addKeysAndValues:;
- (unsigned long long)keysAndValuesCount;
- (id)keysAndValuesAtIndex:;
- (id)keysAndValues;
- (void)setKeysAndValues:;
@end
