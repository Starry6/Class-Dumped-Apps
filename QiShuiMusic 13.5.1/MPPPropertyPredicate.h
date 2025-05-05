@interface MPPPropertyPredicate : PBCodable
@property (nonatomic) BOOL hasProperty;
@property (nonatomic) NSString property;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) MPPMediaPredicateValue value;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) NSInteger comparisonType;
- (void)setProperty:;
- (int)comparisonType;
- (void)dealloc;
- (BOOL)hasValue;
- (void)setComparisonType:;
- (id)property;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasComparisonType:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)hasComparisonType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasProperty;
@end
