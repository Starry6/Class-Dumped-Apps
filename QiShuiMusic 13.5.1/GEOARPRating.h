@interface GEOARPRating : PBCodable
@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL rating;
@property (nonatomic) BOOL hasDisplayedText;
@property (nonatomic) NSString displayedText;
- (void)readAll:;
- (BOOL)rating;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)displayedText;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRating:;
- (void)setHasRating:;
- (BOOL)hasRating;
- (BOOL)hasDisplayedText;
- (void)setDisplayedText:;
+ (BOOL)isValid:;
@end
