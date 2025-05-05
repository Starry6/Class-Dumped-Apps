@interface MBSystemDomainsVersions : NSObject
@property (nonatomic) double version;
@property (nonatomic) double minSupportedVersion;
@property (nonatomic) double maxSupportedVersion;
- (id)init;
- (void)setVersion:;
- (double)version;
- (double)minSupportedVersion;
- (void)setMinSupportedVersion:;
- (double)maxSupportedVersion;
- (void)setMaxSupportedVersion:;
- (id)initWithVersion:minSupportedVersion:maxSupportedVersion:;
- (id)initWithDefaultSystemDomainsPlist;
@end
