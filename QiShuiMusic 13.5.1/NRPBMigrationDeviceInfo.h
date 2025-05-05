@interface NRPBMigrationDeviceInfo : PBCodable
@property (nonatomic) BOOL hasID;
@property (nonatomic) NSData iD;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasAdvertisedName;
@property (nonatomic) NSString advertisedName;
- (void)setID:;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasID;
- (BOOL)hasAdvertisedName;
- (id)iD;
- (id)advertisedName;
- (void)setAdvertisedName:;
@end
