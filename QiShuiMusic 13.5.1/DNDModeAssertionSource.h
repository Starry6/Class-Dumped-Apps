@interface DNDModeAssertionSource : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString deviceIdentifier;
- (id)deviceIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithClientIdentifier:deviceIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
