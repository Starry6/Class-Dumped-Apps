@interface SignpostSupportSubsystemCategoryFilter : NSObject
@property (nonatomic) NSMutableDictionary subsystemsDict;
@property (nonatomic) Q _compoundPredicateType;
@property (nonatomic) BOOL _wantsNotSubsystem;
@property (nonatomic) NSPredicate predicateEquivalent;
- (void)addEntry:;
- (id)debugDescription;
- (void)_forceInclusionOfSubsystem:category:;
- (unsigned long long)_compoundPredicateType;
- (void).cxx_destruct;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesSubsystem:category:;
- (void)addSubsystem:category:;
- (id)predicateEquivalent;
- (void)_fixupToSupportFramerateCalculation;
- (id)_subpredicatesForSubsystemsWithIsSimplified:;
- (id)_predicateEquivalentWithIsSimplified:;
- (id)liveStreamingPredicate;
- (BOOL)matchesSubsystem:category:;
- (id)_initWithEntries:;
- (id)subsystemsDict;
@end
