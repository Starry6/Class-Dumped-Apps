@interface APHTTPCookieMXXT : NSObject
@property (nonatomic) NSDictionary properties;
- (id)requestHeaderField;
- (id)path;
- (id)initWithProperties:;
- (id)copy;
- (void)setProperties:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)name;
- (id)domain;
- (BOOL)isEqual:;
- (id)expiresDate;
+ (id)cookiesWithResponseHeaderFields:forURL:;
@end
