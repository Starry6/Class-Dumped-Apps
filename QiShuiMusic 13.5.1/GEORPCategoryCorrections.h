@interface GEORPCategoryCorrections : PBCodable
@property (nonatomic) NSMutableArray addeds;
@property (nonatomic) NSMutableArray removeds;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)addeds;
- (void)setAddeds:;
- (void)clearAddeds;
- (void)addAdded:;
- (unsigned long long)addedsCount;
- (id)addedAtIndex:;
- (id)removeds;
- (void)setRemoveds:;
- (void)clearRemoveds;
- (void)addRemoved:;
- (unsigned long long)removedsCount;
- (id)removedAtIndex:;
+ (BOOL)isValid:;
+ (Class)addedType;
+ (Class)removedType;
@end
