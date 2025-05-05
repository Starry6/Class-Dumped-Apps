@interface CLPPressureCollectionRequest : PBRequest
@property (nonatomic) CLPMeta meta;
@property (nonatomic) CLPPressure pressure;
@property (nonatomic) CLPLocation pressureLocation;
- (id)meta;
- (id)pressure;
- (void)setPressure:;
- (Class)responseClass;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setMeta:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)pressureLocation;
- (void)setPressureLocation:;
@end
