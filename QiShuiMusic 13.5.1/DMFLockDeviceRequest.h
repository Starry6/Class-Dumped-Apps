@interface DMFLockDeviceRequest : DMFTaskRequest
@property (nonatomic) NSString message;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString pin;
- (id)phoneNumber;
- (void)setMessage:;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)pin;
- (void)setPin:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
