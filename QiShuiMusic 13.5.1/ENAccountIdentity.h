@interface ENAccountIdentity : NSObject
@property (nonatomic) <ENAccountKey> accountKey;
@property (nonatomic) <ENDeviceKey> deviceKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAccountKey:deviceKey:;
- (id)deviceKey;
- (id)accountKey;
- (void)setAccountKey:;
- (void)setDeviceKey:;
+ (BOOL)supportsSecureCoding;
@end
