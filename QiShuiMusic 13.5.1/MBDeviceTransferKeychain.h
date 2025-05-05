@interface MBDeviceTransferKeychain : NSObject
@property (nonatomic) NSString uuid;
- (id)init;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
