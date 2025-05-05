@interface PTDomainInfo : NSObject
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString domainGroupName;
@property (nonatomic) NSString domainName;
@property (nonatomic) NSString settingsClassName;
@property (nonatomic) NSString settingsFrameworkBundlePath;
- (id)domainName;
- (id)initWithDomain:;
- (id)settingsFrameworkBundlePath;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (id)settingsClassName;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)domainGroupName;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
