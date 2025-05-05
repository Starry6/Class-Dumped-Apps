@interface SignpostSupportExactProcessNameFilter : NSObject
@property (nonatomic) Q _compoundPredicateType;
@property (nonatomic) BOOL _wantsNotEqual;
@property (nonatomic) NSSet processNameSet;
@property (nonatomic) NSPredicate predicateEquivalent;
- (id)init;
- (unsigned long long)_compoundPredicateType;
- (void).cxx_destruct;
- (id)predicateEquivalent;
- (BOOL)_wantsNotEqual;
- (BOOL)passesProcessName:;
- (void)addProcessName:;
- (void)addProcessNameSet:;
- (id)processNameSet;
@end
