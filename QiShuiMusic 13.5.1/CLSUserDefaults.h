@interface CLSUserDefaults : NSObject
@property (nonatomic) CLSEndpointConnection endpointConnection;
- (id)endpointConnection;
- (void)setEndpointConnection:;
- (id)initWithEndpoint:;
- (void).cxx_destruct;
- (id)syncUtilityServer:;
- (id)utilityServer:;
- (void)userDefaultsConfigurationDictionaryWithCompletion:;
- (void)getUserDefaultForDefaultNamed:completion:;
- (void)setUserDefaultValue:forDefaultNamed:completion:;
- (BOOL)userDefaultForDefaultNamed:;
+ (id)sharedDefaults;
+ (Class)endpointClass;
+ (id)displayNameForDefaultName:;
@end
