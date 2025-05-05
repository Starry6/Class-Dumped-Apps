@interface SignpostSupportUniquePIDFilter : NSObject
@property (nonatomic) Q _compoundPredicateType;
@property (nonatomic) BOOL _wantsNotEqual;
@property (nonatomic) NSSet uniquePidSet;
@property (nonatomic) NSPredicate predicateEquivalent;
- (id)init;
- (unsigned long long)_compoundPredicateType;
- (void).cxx_destruct;
- (id)predicateEquivalent;
- (BOOL)_wantsNotEqual;
- (BOOL)passesUniquePIDNumber:;
- (void)addUniquePIDNumber:;
- (void)addUniquePIDNumberSet:;
- (id)uniquePidSet;
@end
