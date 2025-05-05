@interface EMListUnsubscribePostValues : NSObject
@property (nonatomic) NSURL oneClickURL;
@property (nonatomic) NSString postContent;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithURL:postContent:;
- (id)oneClickURL;
- (id)postContent;
+ (BOOL)supportsSecureCoding;
@end
