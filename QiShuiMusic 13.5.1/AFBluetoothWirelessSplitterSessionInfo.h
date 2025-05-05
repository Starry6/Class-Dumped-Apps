@interface AFBluetoothWirelessSplitterSessionInfo : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSArray deviceAddresses;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithState:deviceAddresses:;
- (id)deviceAddresses;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
