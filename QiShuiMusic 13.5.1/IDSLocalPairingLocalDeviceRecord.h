@interface IDSLocalPairingLocalDeviceRecord : IDSLocalPairingRecord
- (id)description;
- (id)initWithWithFullIdentityDataClassA:classC:classD:;
- (id)_fullIdenityForDataProtectionClass:error:;
- (id)fullIdentityClassA:;
- (id)fullIdentityClassC:;
- (id)fullIdentityClassD:;
+ (BOOL)supportsSecureCoding;
@end
