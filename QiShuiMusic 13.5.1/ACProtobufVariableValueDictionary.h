@interface ACProtobufVariableValueDictionary : PBCodable
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSMutableArray pairs;
- (id)dictionary;
- (void)setDictionary:;
- (id)initWithDictionary:;
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
- (void)clearPairs;
- (void)addPair:;
- (id)pairAtIndex:;
- (id)pairs;
- (void)setPairs:;
- (unsigned long long)pairsCount;
+ (Class)pairType;
@end
