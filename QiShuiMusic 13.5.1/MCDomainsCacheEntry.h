@interface MCDomainsCacheEntry : NSObject
@property (nonatomic) BOOL subdomainsMatch;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString path;
@property (nonatomic) NSNumber port;
- (id)path;
- (void)setPath:;
- (id)port;
- (void)setPort:;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)setDomain:;
- (id)initWithPattern:;
- (BOOL)matchesURL:;
- (BOOL)subdomainsMatch;
- (void)setSubdomainsMatch:;
+ (id)normalizedPatternString:;
@end
