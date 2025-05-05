@interface SGMailMessageKey : NSObject
@property (nonatomic) NSString source;
@property (nonatomic) NSString messageId;
- (id)messageId;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSource:messageId:;
- (BOOL)isEqualToMailMessageKey:;
+ (BOOL)supportsSecureCoding;
@end
