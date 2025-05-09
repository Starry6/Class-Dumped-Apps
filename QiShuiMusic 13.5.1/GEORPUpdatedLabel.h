@interface GEORPUpdatedLabel : PBCodable
@property (nonatomic) BOOL hasLocalizedText;
@property (nonatomic) NSString localizedText;
@property (nonatomic) BOOL hasCenter;
@property (nonatomic) GEOLatLng center;
- (id)center;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)setCenter:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (BOOL)hasCenter;
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
- (BOOL)hasLocalizedText;
- (id)localizedText;
- (void)setLocalizedText:;
+ (BOOL)isValid:;
@end
