@interface CNAutocompleteSourceInclusionPolicy : NSObject
+ (id)defaultPolicyWithFetchRequest:;
+ (id)policyWithFetchRequest:;
+ (id)policyForNoContactsAccess;
+ (id)policyWithUserDefaults:;
+ (id)policyWithCurrentProcessEntitlements;
+ (id)policyWithPolicies:;
+ (id)policyWithValue:;
@end
