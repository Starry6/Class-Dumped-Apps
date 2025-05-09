@interface GEOTransitBanner : PBCodable
@property (nonatomic) BOOL hasPrimaryText;
@property (nonatomic) GEOFormattedString primaryText;
@property (nonatomic) BOOL hasSecondaryText;
@property (nonatomic) GEOFormattedString secondaryText;
@property (nonatomic) BOOL hasArtwork;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)primaryText;
- (id)unknownFields;
- (void)setPrimaryText:;
- (id)artwork;
- (id)init;
- (id)initWithJSON:;
- (void)setSecondaryText:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)secondaryText;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setArtwork:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPrimaryText;
- (BOOL)hasSecondaryText;
- (BOOL)hasArtwork;
+ (BOOL)isValid:;
@end
