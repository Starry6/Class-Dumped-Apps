@interface PKDiscoveryLSWatcher : NSObject
@property (nonatomic) PKDiscoveryDriver wdriver;
@property (nonatomic) <PKApplicationWorkspaceProxy> workspace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)workspace;
- (void)pluginsDidUninstall:;
- (id)wdriver;
- (void)stopUpdates;
- (void)setWdriver:;
- (id)initWithDriver:;
- (void)pluginsDidInstall:;
- (void).cxx_destruct;
- (void)updateWithUninstalledProxies:;
- (void)update;
- (void)setWorkspace:;
@end
