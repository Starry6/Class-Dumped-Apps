@interface AKCredentialRequestContext : NSObject
@property (nonatomic) NSString _sessionID;
@property (nonatomic) BOOL _shouldForceUI;
@property (nonatomic) BOOL _shouldSkipBiometrics;
@property (nonatomic) BOOL _shouldSkipAuthorizationUI;
@property (nonatomic) BOOL _shouldForcePrivateEmail;
@property (nonatomic) BOOL _requirePassword;
@property (nonatomic) BOOL _isWebLogin;
@property (nonatomic) BOOL _isFirstPartyLogin;
@property (nonatomic) BOOL _isRapportLogin;
@property (nonatomic) BOOL _isEligibleForUpgradeFromPassword;
@property (nonatomic) BOOL _isSubscriptionLogin;
@property (nonatomic) NSString _callerBundleID;
@property (nonatomic) AKAuthorizationUpgradeContext _upgradeContext;
@property (nonatomic) NSString _proxiedClientAppName;
@property (nonatomic) NSString _proxiedClientBundleID;
@property (nonatomic) NSString _proxiedClientServiceID;
@property (nonatomic) NSString _proxiedClientTeamID;
@property (nonatomic) NSString _proxiedClientAppID;
@property (nonatomic) NSArray _proxiedAssociatedDomains;
@property (nonatomic) NSString _proxiedDeviceName;
@property (nonatomic) NSString _proxiedDeviceClass;
@property (nonatomic) BOOL _clientShouldAuthenticateExternally;
@property (nonatomic) BOOL _shouldUseProxiedClientBundleIDForSRP;
@property (nonatomic) NSString _iconName;
@property (nonatomic) NSData _iconData;
@property (nonatomic) NSNumber _iconScale;
@property (nonatomic) NSValue _iconSize;
@property (nonatomic) NSString _informativeText;
@property (nonatomic) double _authSessionTimeoutInterval;
@property (nonatomic) NSString _externalAuthToken;
@property (nonatomic) NSData _externalLocalAuthData;
@property (nonatomic) NSString _continuationRequestIdentifier;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) Q requestOptions;
@property (nonatomic) AKAuthorizationRequest authorizationRequest;
@property (nonatomic) AKPasswordRequest passwordRequest;
@property (nonatomic) NSArray credentialRequests;
- (id)requestIdentifier;
- (id)credentialRequests;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)requestOptions;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)authorizationRequest;
- (id)copyWithZone:;
- (id)_sessionID;
- (id)_iconSize;
- (id)_iconScale;
- (void)setRequestOptions:;
- (id)initWithProxiedClientContext:;
- (id)_externalLocalAuthData;
- (void)set_continuationRequestIdentifier:;
- (void)set_externalAuthToken:;
- (void)set_externalLocalAuthData:;
- (void)setAuthorizationRequest:;
- (id)_informativeText;
- (id)_continuationRequestIdentifier;
- (id)_iconName;
- (id)_iconData;
- (id)initWithUpgradeContext:;
- (void)setCredentialRequests:;
- (BOOL)_isEligibleForUpgradeFromPassword;
- (BOOL)_isSubscriptionLogin;
- (id)_proxiedClientAppName;
- (id)_proxiedClientBundleID;
- (id)_proxiedClientServiceID;
- (id)_proxiedClientTeamID;
- (id)_proxiedClientAppID;
- (BOOL)_requirePassword;
- (void)set_requirePassword:;
- (void)set_sessionID:;
- (BOOL)_shouldForceUI;
- (void)set_shouldForceUI:;
- (BOOL)_shouldSkipBiometrics;
- (void)set_shouldSkipBiometrics:;
- (BOOL)_shouldSkipAuthorizationUI;
- (void)set_shouldSkipAuthorizationUI:;
- (void)set_informativeText:;
- (void)set_iconName:;
- (void)set_iconData:;
- (void)set_iconScale:;
- (void)set_iconSize:;
- (BOOL)_shouldForcePrivateEmail;
- (void)set_shouldForcePrivateEmail:;
- (void)set_proxiedClientAppName:;
- (void)set_proxiedClientBundleID:;
- (void)set_proxiedClientAppID:;
- (void)set_proxiedClientTeamID:;
- (id)_proxiedAssociatedDomains;
- (void)set_proxiedAssociatedDomains:;
- (BOOL)_isWebLogin;
- (void)set_isWebLogin:;
- (BOOL)_isFirstPartyLogin;
- (void)set_isFirstPartyLogin:;
- (BOOL)_isRapportLogin;
- (void)set_isRapportLogin:;
- (id)_callerBundleID;
- (void)set_callerBundleID:;
- (id)_proxiedDeviceName;
- (void)set_proxiedDeviceName:;
- (id)_proxiedDeviceClass;
- (void)set_proxiedDeviceClass:;
- (void)set_proxiedClientServiceID:;
- (id)_upgradeContext;
- (BOOL)_clientShouldAuthenticateExternally;
- (void)set_clientShouldAuthenticateExternally:;
- (double)_authSessionTimeoutInterval;
- (void)set_authSessionTimeoutInterval:;
- (id)_externalAuthToken;
- (BOOL)_shouldUseProxiedClientBundleIDForSRP;
- (void)set_shouldUseProxiedClientBundleIDForSRP:;
- (id)passwordRequest;
- (void)setPasswordRequest:;
+ (BOOL)supportsSecureCoding;
@end
