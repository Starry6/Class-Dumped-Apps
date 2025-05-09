@interface GEOPBTransitZoomRangeString : PBCodable
@property (nonatomic) BOOL hasMinZoom;
@property (nonatomic) I minZoom;
@property (nonatomic) BOOL hasLabelLanguage;
@property (nonatomic) NSString labelLanguage;
@property (nonatomic) BOOL hasLabelText;
@property (nonatomic) NSString labelText;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (unsigned int)minZoom;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setMinZoom:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setLabelText:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)labelText;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasMinZoom:;
- (BOOL)hasMinZoom;
- (BOOL)hasLabelLanguage;
- (id)labelLanguage;
- (void)setLabelLanguage:;
- (BOOL)hasLabelText;
+ (BOOL)isValid:;
@end
