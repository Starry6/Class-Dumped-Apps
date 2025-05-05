@interface NRPBMutableDeviceCollection : PBCodable
@property (nonatomic) NSMutableArray pairingIDs;
@property (nonatomic) NSMutableArray devices;
- (void)setDevices:;
- (void)clearPairingIDs;
- (id)devicesAtIndex:;
- (id)devices;
- (void)writeTo:;
- (void)addPairingIDs:;
- (void)addDevices:;
- (unsigned long long)hash;
- (id)pairingIDsAtIndex:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)clearDevices;
- (unsigned long long)devicesCount;
- (BOOL)readFrom:;
- (id)description;
- (unsigned long long)pairingIDsCount;
- (void)setPairingIDs:;
- (id)dictionaryRepresentation;
- (id)pairingIDs;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (Class)pairingIDsType;
+ (Class)devicesType;
@end
