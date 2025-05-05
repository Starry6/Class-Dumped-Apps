@interface SSRestrictions : NSObject
+ (void)isRestrictionsPasscodeSet:;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (void)setAllowExplicitContent;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:completionBlock:;
+ (void)didDisplayExplicitRestrictionAlertOfType:;
+ (BOOL)_calculateIsRestrictionsPasscodeSet;
+ (BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
@end
