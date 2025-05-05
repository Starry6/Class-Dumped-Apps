@interface AMSFDSRequest : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSString logKey;
@property (nonatomic) AMSFDSOptions options;
@property (nonatomic) NSNumber purchaseIdentifier;
- (id)account;
- (void)setLogKey:;
- (id)logKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPurchaseIdentifier:account:options:;
- (id)purchaseIdentifier;
+ (BOOL)supportsSecureCoding;
@end
