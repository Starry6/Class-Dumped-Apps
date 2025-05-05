@interface AMSAnisette : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)_syncMachineWithActionData:type:account:bag:;
+ (unsigned long long)_accountIDForType:account:;
+ (id)createBagForSubProfile;
+ (id)_headersForRequest:account:type:;
+ (id)_handleActionName:actionData:account:type:bag:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)_eraseProvisioningForType:account:;
+ (BOOL)handleResponse:account:type:bag:;
+ (BOOL)_shouldRetryAfterError:;
+ (void)_bagDomainExistsForURL:type:bag:completion:;
+ (id)handleResponse:type:bag:account:;
+ (id)bagKeySet;
+ (id)headersForRequest:account:type:bag:;
+ (id)_provisionMachineWithActionData:type:account:bag:;
@end
