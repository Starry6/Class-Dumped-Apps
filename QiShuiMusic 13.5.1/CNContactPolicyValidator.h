@interface CNContactPolicyValidator : NSObject
+ (id)contactFromContact:conformingToPolicy:options:valueToStringTransform:;
+ (id)contactFromContact:conformingToPolicy:options:;
+ (BOOL)shouldIgnoreValidationCheckForProperty:;
@end
