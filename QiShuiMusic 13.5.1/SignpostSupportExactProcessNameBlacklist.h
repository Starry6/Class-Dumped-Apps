@interface SignpostSupportExactProcessNameBlacklist : SignpostSupportExactProcessNameFilter
- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;
- (BOOL)passesProcessName:;
@end
