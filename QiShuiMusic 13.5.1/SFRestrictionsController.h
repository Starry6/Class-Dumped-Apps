@interface SFRestrictionsController : NSObject
+ (id)restrictionSpecifiers;
+ (id)TCCServices;
+ (void)setSpringBoardCapability:enabled:;
+ (void)resetRestrictions;
+ (void)resetRestrictionsPassword;
@end
