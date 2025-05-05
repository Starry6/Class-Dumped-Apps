@interface MDMESSODetails : NSObject
@property (nonatomic) NSNumber iTunesStoreID;
@property (nonatomic) NSArray appIDs;
@property (nonatomic) NSArray associatedDomains;
@property (nonatomic) NSNumber associatedDomainsEnableDirectDownloads;
@property (nonatomic) NSData configurationProfile;
- (id)associatedDomains;
- (void).cxx_destruct;
- (void)setAssociatedDomains:;
- (id)associatedDomainsEnableDirectDownloads;
- (void)setAssociatedDomainsEnableDirectDownloads:;
- (id)iTunesStoreID;
- (void)setITunesStoreID:;
- (id)initWithiTunesStoreID:appIDs:associatedDomains:associatedDomainsEnableDirectDownloads:configurationProfile:;
- (id)appIDs;
- (void)setAppIDs:;
- (id)configurationProfile;
- (void)setConfigurationProfile:;
+ (id)essoDetailsWithJSONDictionary:;
@end
