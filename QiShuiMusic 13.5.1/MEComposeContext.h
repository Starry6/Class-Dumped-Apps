@interface MEComposeContext : NSObject
@property (nonatomic) MEMessage originalMessage;
@property (nonatomic) NSUUID contextID;
@property (nonatomic) q action;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL isSigned;
@property (nonatomic) BOOL shouldEncrypt;
@property (nonatomic) BOOL shouldSign;
- (BOOL)isEncrypted;
- (id)contextID;
- (long long)action;
- (void)setContextID:;
- (id)initWithCoder:;
- (void)setAction:;
- (BOOL)isSigned;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIsEncrypted:;
- (BOOL)shouldEncrypt;
- (id)originalMessage;
- (void)setOriginalMessage:;
- (BOOL)shouldSign;
- (void)setShouldSign:;
- (void)setShouldEncrypt:;
- (void)setIsSigned:;
- (id)initWithAction:originalMessage:shouldSign:isSigned:shouldEncrypt:isEncrypted:;
+ (BOOL)supportsSecureCoding;
@end
