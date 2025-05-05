@interface SGMailHeaders : NSObject
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString subject;
@property (nonatomic) NSArray from;
@property (nonatomic) NSArray to;
@property (nonatomic) NSArray cc;
- (id)subject;
- (void)setSubject:;
- (id)messageId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)from;
- (void)setFrom:;
- (id)to;
- (void)setTo:;
- (id)cc;
- (void)setCc:;
- (id)initWithMessageId:;
+ (BOOL)supportsSecureCoding;
@end
