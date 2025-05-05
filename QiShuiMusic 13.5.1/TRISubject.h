@interface TRISubject : PBCodable
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) NSString deviceId;
- (id)deviceId;
- (void)setDeviceId:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasDeviceId;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
