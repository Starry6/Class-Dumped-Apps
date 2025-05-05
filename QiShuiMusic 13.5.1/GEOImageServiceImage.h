@interface GEOImageServiceImage : PBCodable
@property (nonatomic) BOOL hasImageId;
@property (nonatomic) NSData imageId;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSData image;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)imageId;
- (void)setImage:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasImage;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)image;
- (void)setImageId:;
- (id)copyWithZone:;
- (BOOL)hasImageId;
+ (BOOL)isValid:;
@end
