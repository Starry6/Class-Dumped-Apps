@interface SignpostSupportPIDFilter : NSObject
@property (nonatomic) Q _compoundPredicateType;
@property (nonatomic) BOOL _wantsNotEqual;
@property (nonatomic) NSSet pidSet;
@property (nonatomic) NSPredicate predicateEquivalent;
- (id)init;
- (unsigned long long)_compoundPredicateType;
- (void).cxx_destruct;
- (BOOL)_wantsNotSubsystem;
- (id)predicateEquivalent;
- (BOOL)passesPIDNumber:;
- (void)addPIDNumber:;
- (void)addPIDNumberSet:;
- (id)pidSet;
- (BOOL)_wantsNotEqual;
@end
