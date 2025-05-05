@interface GEOPDMuninViewState : PBCodable
@property (nonatomic) BOOL hasCameraFrame;
@property (nonatomic) GEOPDCameraFrame cameraFrame;
@property (nonatomic) BOOL hasLocationInfo;
@property (nonatomic) GEOPDLocationInfo locationInfo;
- (void)readAll:;
- (id)cameraFrame;
- (id)locationInfo;
- (id)init;
- (id)initWithJSON:;
- (void)setLocationInfo:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setCameraFrame:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasCameraFrame;
- (BOOL)hasLocationInfo;
+ (BOOL)isValid:;
@end
