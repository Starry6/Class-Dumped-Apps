@interface NRPBMigrationDevices : PBCodable
@property (nonatomic) NSMutableArray devices;
@property (nonatomic) BOOL hasPhoneUDIDHash;
@property (nonatomic) NSData phoneUDIDHash;
- (void)setDevices:;
- (id)devicesAtIndex:;
- (id)devices;
- (void)writeTo:;
- (void)addDevices:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)clearDevices;
- (unsigned long long)devicesCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPhoneUDIDHash;
- (id)phoneUDIDHash;
- (void)setPhoneUDIDHash:;
+ (Class)devicesType;
@end
