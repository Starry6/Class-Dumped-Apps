@interface ACProtobufVariableValueList : PBCodable
@property (nonatomic) NSArray array;
@property (nonatomic) NSSet set;
@property (nonatomic) NSMutableArray values;
- (id)valueAtIndex:;
- (id)values;
- (id)set;
- (void)writeTo:;
- (id)array;
- (unsigned long long)hash;
- (void)clearValues;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)addValue:;
- (unsigned long long)valuesCount;
- (id)initWithArray:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setArray:;
- (id)initWithSet:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setValues:;
- (void)setSet:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_convertArray:;
+ (Class)valueType;
@end
