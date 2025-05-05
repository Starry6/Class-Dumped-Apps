@interface SLGDomainWhitelist : NSObject
@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (nonatomic) NSSet whitelist;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)whitelist;
- (void).cxx_destruct;
- (void)addDomain:;
- (BOOL)isDomainWhitelisted:;
- (void)removeDomain:;
- (BOOL)allowUnspecifiedDomains;
- (void)setAllowUnspecifiedDomains:;
- (void)_reloadSettings;
- (void)_lockQueue_loadSettings;
- (void)_lockQueue_loadWhitelist;
- (void)_lockQueue_loadUnspecifiedDomains;
- (void)_beginObservingSettings;
- (void)_stopObservingSettings;
@end
