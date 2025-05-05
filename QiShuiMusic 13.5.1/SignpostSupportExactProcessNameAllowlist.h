@interface SignpostSupportExactProcessNameAllowlist : SignpostSupportExactProcessNameFilter
- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;
- (BOOL)passesProcessName:;
@end
