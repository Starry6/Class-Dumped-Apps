@interface SOClient : NSObject
@property (nonatomic) SOServiceConnection serviceConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceConnection;
- (id)init;
- (void)getAuthorizationHintsWithURL:responseCode:completion:;
- (void)configurationWithCompletion:;
- (void)finishAuthorizationWithCompletion:;
- (void)beginAuthorizationWithRequestParameters:completion:;
- (void)debugHintsWithCompletion:;
- (void)setServiceConnection:;
- (void)isExtensionProcessWithAuditToken:completion:;
- (void).cxx_destruct;
- (void)profilesWithExtensionBundleIdentifier:completion:;
- (void)cancelAuthorizationWithCompletion:;
- (void)performAuthorizationWithRequestParameters:completion:;
- (void)realmsWithCompletion:;
+ (id)_queue;
@end
