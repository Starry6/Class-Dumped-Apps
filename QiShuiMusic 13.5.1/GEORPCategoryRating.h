@interface GEORPCategoryRating : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) GEORPRatingValue value;
- (void)readAll:;
- (BOOL)hasKey;
- (id)init;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void)setValue:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
