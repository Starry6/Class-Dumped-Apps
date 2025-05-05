@interface INIntentForwardingAction : NSObject
@property (nonatomic) INIntent intent;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) {?=[8I]} hostProcessAuditToken;
@property (nonatomic) BOOL allowsScenelessAppLaunch;
@property (nonatomic) BOOL allowsForegroundAppLaunch;
@property (nonatomic) double requestTimeout;
- (id)intent;
- (id)initWithCoder:;
- (id)appBundleIdentifier;
- (void)encodeWithCoder:;
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void).cxx_destruct;
- (void)setRequestTimeout:;
- (double)requestTimeout;
- (id)initWithIntent:;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
- (id)hostProcessAuditToken;
- (BOOL)allowsScenelessAppLaunch;
- (void)setAllowsScenelessAppLaunch:;
- (BOOL)allowsForegroundAppLaunch;
+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;
@end
