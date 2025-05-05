@interface EMListUnsubscribeMailtoValues : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString body;
@property (nonatomic) <EDReceivingAccount> account;
- (id)account;
- (id)subject;
- (id)body;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)address;
- (BOOL)isEqual:;
- (id)initWithAddresss:subject:body:account:;
+ (BOOL)supportsSecureCoding;
@end
