@interface GEORPRatingValue : PBCodable
@property (nonatomic) BOOL hasCategoryName;
@property (nonatomic) GEOLocalizedString categoryName;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) NSInteger score;
- (void)readAll:;
- (id)initWithJSON:;
- (int)score;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setScore:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (id)copyWithZone:;
- (BOOL)hasCategoryName;
- (id)categoryName;
- (void)setCategoryName:;
+ (BOOL)isValid:;
@end
