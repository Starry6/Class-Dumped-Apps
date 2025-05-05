@interface MPMediaContainmentPredicate : MPMediaPredicate
@property (nonatomic) NSString property;
@property (nonatomic) NSSet values;
- (id)property;
- (id)values;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)ML3PredicateForTrack;
- (id)description;
- (id)ML3PredicateForContainer;
- (BOOL)isEqual:;
- (id)_ML3PredicateForEntityClass:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:values:;
@end
