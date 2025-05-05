@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable
@property (nonatomic) BOOL hasWifiConnectionQuality;
@property (nonatomic) GEOWiFiConnectionQuality wifiConnectionQuality;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasWifiConnectionQuality;
- (id)wifiConnectionQuality;
- (void)setWifiConnectionQuality:;
+ (BOOL)isValid:;
@end
