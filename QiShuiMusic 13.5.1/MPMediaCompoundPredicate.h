@interface MPMediaCompoundPredicate : MPMediaPredicate
@property (nonatomic) NSArray predicates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPredicates:;
- (id)predicates;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithProtobufferDecodableObject:library:;
- (id)protobufferEncodableObjectFromLibrary:;
- (void).cxx_destruct;
- (id)ML3PredicateForTrack;
- (id)description;
- (id)ML3PredicateForContainer;
- (BOOL)isEqual:;
- (id)_ML3PredicateForEntityTypeSelector:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:;
@end
