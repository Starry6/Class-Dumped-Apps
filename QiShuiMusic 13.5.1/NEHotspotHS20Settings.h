@interface NEHotspotHS20Settings : NSObject
@property (nonatomic) NSString domainName;
@property (nonatomic) BOOL roamingEnabled;
@property (nonatomic) NSArray roamingConsortiumOIs;
@property (nonatomic) NSArray naiRealmNames;
@property (nonatomic) NSArray MCCAndMNCs;
- (id)domainName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isRoamingEnabled;
- (void)setRoamingEnabled:;
- (id)initWithDomainName:roamingEnabled:;
- (id)roamingConsortiumOIs;
- (void)setRoamingConsortiumOIs:;
- (id)naiRealmNames;
- (void)setNaiRealmNames:;
- (id)MCCAndMNCs;
- (void)setMCCAndMNCs:;
+ (BOOL)supportsSecureCoding;
@end
