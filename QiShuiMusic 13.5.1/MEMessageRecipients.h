@interface MEMessageRecipients : NSObject
@property (nonatomic) NSArray to;
@property (nonatomic) NSArray cc;
@property (nonatomic) NSArray bcc;
@property (nonatomic) NSArray replyTo;
@property (nonatomic) NSArray allRecipients;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)to;
- (id)cc;
- (id)bcc;
- (id)replyTo;
- (id)allRecipients;
- (id)initWithStringsTo:cc:bcc:replyTo:;
- (id)initWithTo:cc:bcc:replyTo:;
+ (BOOL)supportsSecureCoding;
+ (id)emailAddressesForEmailAddressStrings:;
@end
