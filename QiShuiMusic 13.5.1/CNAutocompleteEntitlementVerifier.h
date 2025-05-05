@interface CNAutocompleteEntitlementVerifier : NSObject
+ (BOOL)currentProcessHasBooleanEntitlement:;
+ (BOOL)currentProcessHasSuggestionsEntitlement;
+ (BOOL)currentProcessHasRecentsEntitlement;
+ (BOOL)currentProcessHasStewieEntitlement;
+ (BOOL)currentProcessHasDuetEntitlement;
+ (BOOL)currentProcessHasContactsEntitlement;
+ (BOOL)currentProcessHasCalendarEntitlement;
+ (BOOL)currentProcessHasNetworkClientEntitlement;
@end
