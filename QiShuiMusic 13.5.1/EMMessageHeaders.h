@interface EMMessageHeaders : NSObject
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSArray headerKeys;
- (id)initWithCoder:;
- (void)setHeaders:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)headers;
- (id)headersForKey:;
- (id)initWithHeaders:;
- (id)firstHeaderForKey:;
- (id)headerKeys;
+ (BOOL)supportsSecureCoding;
@end
