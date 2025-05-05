@interface MEMessageSigner : NSObject
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSString label;
@property (nonatomic) NSData context;
- (id)emailAddresses;
- (id)context;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithEmailAddresses:signatureLabel:context:;
+ (BOOL)supportsSecureCoding;
@end
