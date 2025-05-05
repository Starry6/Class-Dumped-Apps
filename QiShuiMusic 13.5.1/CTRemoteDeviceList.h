@interface CTRemoteDeviceList : NSObject
@property (nonatomic) NSMutableArray devices;
- (void)setDevices:;
- (id)devices;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
