@interface CLPLOGENTRYVISIONLSLLocation : PBCodable
@property (nonatomic) BOOL hasCoordinate;
@property (nonatomic) CLPLOGENTRYVISIONLSLLocationCoordinate coordinate;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CLPLOGENTRYVISIONTimeStamp timestamp;
- (double)altitude;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setAltitude:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)coordinate;
- (BOOL)readFrom:;
- (id)timestamp;
- (id)description;
- (BOOL)hasCoordinate;
- (id)dictionaryRepresentation;
- (void)setCoordinate:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasAltitude:;
- (BOOL)hasAltitude;
@end
