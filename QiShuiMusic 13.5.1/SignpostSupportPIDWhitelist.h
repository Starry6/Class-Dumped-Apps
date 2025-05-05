@interface SignpostSupportPIDWhitelist : SignpostSupportPIDFilter
- (unsigned long long)_compoundPredicateType;
- (BOOL)passesPIDNumber:;
- (BOOL)_wantsNotEqual;
@end
