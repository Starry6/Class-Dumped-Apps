@interface MPPSearchStringPredicate : PBCodable
@property (nonatomic) BOOL hasSearchString;
@property (nonatomic) NSString searchString;
@property (nonatomic) NSMutableArray properties;
- (void)setSearchString:;
- (void)dealloc;
- (id)searchString;
- (void)setProperties:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)properties;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSearchString;
- (void)clearProperties;
- (void)addProperties:;
- (id)propertiesAtIndex:;
- (unsigned long long)propertiesCount;
@end
