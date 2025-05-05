@interface ENTextMessage : NSObject
@property (nonatomic) NSString message;
@property (nonatomic) NSArray embeddedURLs;
@property (nonatomic) NSURL ensTestVerificationURL;
@property (nonatomic) NSString testVerificationCode;
@property (nonatomic) ENRegion testVerificationRegion;
@property (nonatomic) NSString signature;
@property (nonatomic) NSString verificationString;
- (id)signature;
- (void)setMessage:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)ensTestVerificationURL;
- (id)verificationString;
- (id)testVerificationCode;
- (id)testVerificationRegion;
- (id)initWithMessage:embeddedURLs:;
- (id)embeddedURLs;
- (void)setEmbeddedURLs:;
- (void)setTestVerificationCode:;
- (void)setTestVerificationRegion:;
- (void)setEnsTestVerificationURL:;
+ (BOOL)supportsSecureCoding;
+ (id)textMessageWithMessage:embeddedURLs:;
@end
