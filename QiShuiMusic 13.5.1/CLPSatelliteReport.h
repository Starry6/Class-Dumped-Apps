@interface CLPSatelliteReport : PBCodable
@property (nonatomic) BOOL hasGps;
@property (nonatomic) CLPSatelliteInfo gps;
@property (nonatomic) BOOL hasGlonass;
@property (nonatomic) CLPSatelliteInfo glonass;
@property (nonatomic) BOOL hasQzss;
@property (nonatomic) CLPSatelliteInfo qzss;
@property (nonatomic) BOOL hasGalileo;
@property (nonatomic) CLPSatelliteInfo galileo;
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
- (id)gps;
- (void)setGps:;
- (BOOL)hasGps;
- (BOOL)hasGlonass;
- (BOOL)hasQzss;
- (BOOL)hasGalileo;
- (id)glonass;
- (void)setGlonass:;
- (id)qzss;
- (void)setQzss:;
- (id)galileo;
- (void)setGalileo:;
@end
