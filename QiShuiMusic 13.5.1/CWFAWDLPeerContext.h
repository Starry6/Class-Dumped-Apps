@interface CWFAWDLPeerContext : NSObject
@property (nonatomic) NSString MACAddress;
@property (nonatomic) NSString interfaceName;
- (void)setInterfaceName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)interfaceName;
- (id)MACAddress;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToAWDLPeerContext:;
- (void)setMACAddress:;
+ (BOOL)supportsSecureCoding;
+ (id)AWDLPeerContextWithMACAddress:interfaceName:;
@end
