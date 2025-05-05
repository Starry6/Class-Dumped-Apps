@interface AMSURLRequest : NSMutableURLRequest
@property (nonatomic) AMSURLRequestProperties properties;
- (id)initWithRequest:;
- (id)initWithRequest:bag:;
- (void)setProperties:;
- (id)initWithRequest:properties:;
- (id)properties;
- (void).cxx_destruct;
- (id)initWithURL:cachePolicy:timeoutInterval:;
- (id)description;
- (id)_initWithCFURLRequest:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)logableDescriptionForRequest:;
@end
