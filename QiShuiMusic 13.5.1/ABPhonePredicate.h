@interface ABPhonePredicate : ABPredicate
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString country;
- (id)country;
- (void)dealloc;
- (id)phoneNumber;
- (id)predicateFormat;
- (void)setPhoneNumber:;
- (void)setCountry:;
- (id)homeCountryCode;
- (BOOL)isValid;
- (id)queryWhereStringForPredicateIdentifier:;
- (void)ab_bindWhereClauseComponentOfStatement:withBindingOffset:predicateIdentifier:;
- (id)queryJoinsInCompound:predicateIdentifier:;
- (BOOL)hasCallback;
- (void)evaluateCallbackWithSqliteContext:predicateContext:values:count:;
@end
