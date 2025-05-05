@interface AMSContentInfo : NSObject
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSDate created;
@property (nonatomic) NSDate expires;
@property (nonatomic) NSString path;
@property (nonatomic) NSString version;
- (id)created;
- (id)path;
- (id)cacheKey;
- (void)setCreated:;
- (void)setVersion:;
- (id)version;
- (void)setPath:;
- (id)expires;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setExpires:;
- (void)setCacheKey:;
+ (BOOL)supportsSecureCoding;
@end
