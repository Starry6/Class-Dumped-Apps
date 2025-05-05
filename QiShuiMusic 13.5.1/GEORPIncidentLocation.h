@interface GEORPIncidentLocation : PBCodable
@property (nonatomic) BOOL hasLatLng;
@property (nonatomic) GEOLatLng latLng;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) I zoomLevel;
- (void)readAll:;
- (unsigned int)zoomLevel;
- (void)setZoomLevel:;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)latLng;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasZoomLevel:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasZoomLevel;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasLatLng;
- (void)setLatLng:;
+ (BOOL)isValid:;
@end
