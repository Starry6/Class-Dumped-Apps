@interface AMSAbsinthe : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)handleResponse:bag:;
+ (id)createBagForSubProfile;
+ (void)_signingDataFromRequest:buyParams:bag:completion:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)_dataToSignFromRequest:bagDefinition:;
+ (id)headersForRequest:buyParams:bag:;
+ (id)bagKeySet;
@end
