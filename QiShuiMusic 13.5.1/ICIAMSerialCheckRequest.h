@interface ICIAMSerialCheckRequest : PBRequest
@property (nonatomic) BOOL hasDSID;
@property (nonatomic) q dSID;
@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) NSString deviceID;
- (void)setDSID:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDeviceID:;
- (id)deviceID;
- (void)mergeFrom:;
- (BOOL)hasDeviceID;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasDSID:;
- (BOOL)hasDSID;
- (long long)dSID;
@end
