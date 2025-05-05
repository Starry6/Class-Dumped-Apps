@interface MBDomainManager : NSObject
@property (nonatomic) MBSystemDomainsVersions systemDomainsVersions;
@property (nonatomic) NSDictionary systemDomainsByName;
@property (nonatomic) NSMutableDictionary domainsByName;
- (id)allDomains;
- (void).cxx_destruct;
- (void)addDomain:;
- (id)domainsByName;
- (void)setDomainsByName:;
- (id)initWithDomains:;
- (id)initWithDefaultSystemDomainsPlist;
- (id)initWithSystemDomains:versions:;
- (id)initWithSystemDomains:;
- (id)initWithAccountType:volumeMountPoint:plistPath:error:;
- (id)initWithAccountType:volumeMountPoint:error:;
- (id)initWithSystemDomainsPlist:;
- (BOOL)isSystemDomainName:;
- (BOOL)containsDomainName:;
- (id)domainForName:;
- (id)domainForPath:relativePath:;
- (id)redirectDomain:forRelativePath:;
- (void)addDomain:forName:;
- (id)systemDomainsVersions;
- (void)setSystemDomainsVersions:;
- (id)systemDomainsByName;
- (void)setSystemDomainsByName:;
@end
