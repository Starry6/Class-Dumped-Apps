@interface GEORevealedPlaceCardModuleTypePhotos : PBCodable
@property (nonatomic) BOOL hasCategoryAlbumExists;
@property (nonatomic) BOOL categoryAlbumExists;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)categoryAlbumExists;
- (void)setCategoryAlbumExists:;
- (void)setHasCategoryAlbumExists:;
- (BOOL)hasCategoryAlbumExists;
+ (BOOL)isValid:;
@end
