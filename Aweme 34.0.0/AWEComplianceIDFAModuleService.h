@interface AWEComplianceIDFAModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)tm_permissionStateOfATStatus:;
+ (void)requestTrackingAuthorizationWithCompletionHandler:;
+ (unsigned long long)trackingAuthorizationStatus;
@end
