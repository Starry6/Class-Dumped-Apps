@interface ATTrackingEnforcementManager : NSObject
+ (BOOL)shouldEnforceTrackingWithReasonCode:;
+ (void)setLastBagLookup:;
+ (id)lastBagLookup;
+ (void)setLastEnforcement:;
+ (BOOL)lastEnforcement;
+ (void)setLastReasonCode:;
+ (long long)lastReasonCode;
+ (void)setIsDefaultReturned:;
+ (BOOL)isDefaultReturned;
@end
