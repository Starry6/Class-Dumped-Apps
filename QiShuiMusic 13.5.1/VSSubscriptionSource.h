@interface VSSubscriptionSource : NSObject
@property (nonatomic) q kind;
@property (nonatomic) NSString identifier;
- (void)setKind:;
- (id)init;
- (id)identifier;
- (long long)kind;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)subscriptionSourceForWebsiteWithURL:;
+ (BOOL)supportsSecureCoding;
+ (id)subscriptionSourceForWebsiteWithDomainName:;
+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:;
@end
