@interface MSVEntitlementUtilities : NSObject
+ (BOOL)hasBoolEntitlement:;
+ (BOOL)_checkEntitlement:inGroup:shouldLogForMissingEntitlement:;
+ (BOOL)hasBoolEntitlement:shouldLogForMissingEntitlement:;
+ (BOOL)hasEntitlement:inGroup:shouldLogForMissingEntitlement:;
+ (BOOL)hasEntitlement:inGroup:;
+ (id)_checkArrayEntitlement:group:task:;
+ (void)_logForMissingEntitlementWithResult:;
+ (id)_checkBooleanEntitlement:task:;
@end
