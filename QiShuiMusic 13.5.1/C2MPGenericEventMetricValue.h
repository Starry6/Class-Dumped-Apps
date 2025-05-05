@interface C2MPGenericEventMetricValue : PBCodable
@property (nonatomic) BOOL hasStringValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDateValue;
@property (nonatomic) Q dateValue;
- (void)setDoubleValue:;
- (unsigned long long)dateValue;
- (double)doubleValue;
- (void)writeTo:;
- (BOOL)hasDateValue;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setStringValue:;
- (void)mergeFrom:;
- (void)setDateValue:;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)hasDoubleValue;
- (BOOL)readFrom:;
- (id)description;
- (void)setHasDoubleValue:;
- (id)dictionaryRepresentation;
- (void)setHasDateValue:;
- (BOOL)isEqual:;
- (BOOL)hasStringValue;
- (id)copyWithZone:;
@end
