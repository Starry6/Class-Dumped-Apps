@interface NRPBMutableDevice : PBCodable
@property (nonatomic) NSMutableArray names;
@property (nonatomic) NSMutableArray properties;
- (void)setNames:;
- (void)setProperties:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)names;
- (id)properties;
- (void).cxx_destruct;
- (unsigned long long)namesCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)clearNames;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearProperties;
- (void)addProperties:;
- (id)propertiesAtIndex:;
- (unsigned long long)propertiesCount;
- (void)addNames:;
- (id)namesAtIndex:;
+ (Class)propertiesType;
+ (Class)namesType;
@end
