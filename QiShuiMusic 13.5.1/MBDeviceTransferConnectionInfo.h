@interface MBDeviceTransferConnectionInfo : NSObject
@property (nonatomic) q connectionState;
@property (nonatomic) q connectionType;
- (long long)connectionType;
- (void)setConnectionType:;
- (long long)connectionState;
- (id)init;
- (id)initWithCoder:;
- (void)setConnectionState:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (long long)connectionTypeFromLinkType:;
+ (BOOL)supportsSecureCoding;
@end
