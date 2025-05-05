@interface TRIMisc : NSObject
+ (BOOL)convertFromString:usingBase:toI64:;
+ (unsigned long long)unsafeFirstAuthenticationState;
+ (id)bestEffortSymbolicateAddress:;
+ (unsigned long long)roundToOneSignificantDigitWithU64:;
+ (BOOL)convertFromString:usingBase:toU64:;
@end
