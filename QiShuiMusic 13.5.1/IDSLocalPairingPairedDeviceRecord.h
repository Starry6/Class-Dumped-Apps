@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord
@property (nonatomic) NSUUID cbuuid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)cbuuid;
- (id)initWithCBUUID:publicIdentityDataClassA:classC:classD:;
- (id)_publicIdenityForDataProtectionClass:error:;
- (id)publicIdentityClassA:;
- (id)publicIdentityClassC:;
- (id)publicIdentityClassD:;
+ (BOOL)supportsSecureCoding;
@end
