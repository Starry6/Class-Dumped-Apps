@interface FBPreferences : BSAbstractDefaultDomain
@property (nonatomic) BOOL disableXPCServicesEndpointHack;
- (id)_init;
- (void)_bindAndRegisterDefaults;
+ (id)sharedInstance;
@end
