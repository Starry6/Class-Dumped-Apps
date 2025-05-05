@interface ICDelegationNetServiceTXTRecord : NSObject
@property (nonatomic) NSArray delegationAccountUUIDs;
@property (nonatomic) NSString deviceName;
@property (nonatomic) q securityMode;
@property (nonatomic) q serviceVersion;
@property (nonatomic) NSData TXTRecordData;
- (void)setDeviceName:;
- (id)deviceName;
- (long long)securityMode;
- (void)setSecurityMode:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)TXTRecordData;
- (long long)serviceVersion;
- (void)setServiceVersion:;
- (id)delegationAccountUUIDs;
- (id)initWithTXTRecordData:;
- (void)setDelegationAccountUUIDs:;
@end
