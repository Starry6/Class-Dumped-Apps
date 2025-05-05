@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter
- (void)_forceInclusionOfSubsystem:category:;
- (unsigned long long)_compoundPredicateType;
- (id)initWithEntries:;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesSubsystem:category:;
@end
