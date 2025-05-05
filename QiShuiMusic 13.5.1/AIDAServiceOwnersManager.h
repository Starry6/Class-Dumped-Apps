@interface AIDAServiceOwnersManager : NSObject
@property (nonatomic) NSDictionary serviceOwners;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAccountStore:;
- (id)init;
- (id)nameComponentsForAccount:service:;
- (void)signOutOfServices:usingContext:completion:;
- (void)signInService:withContext:completion:;
- (void)signInToAllServicesInBackgroundUsingContext:completion:;
- (void)signOutService:withContext:completion:;
- (void)signOutOfAllServicesUsingContext:completion:;
- (id)altDSIDForAccount:service:;
- (void)signInToAllServicesInBackground:usingContext:completion:;
- (id)DSIDForAccount:service:;
- (id)accountForService:;
- (void).cxx_destruct;
- (id)serviceOwners;
- (void)signInToServices:usingContext:completion:;
- (id)_buildServiceOwnerMapping;
- (void)setServiceOwners:;
- (id)_postCloudSupportedServicesForAltDSID:;
+ (id)supportedServices;
+ (id)serviceOwnerBundles;
@end
