@interface MPMediaConditionalPredicate : MPMediaPredicate
@property (nonatomic) MPMediaPredicate conditionPredicate;
@property (nonatomic) MPMediaPredicate thenPredicate;
@property (nonatomic) MPMediaPredicate elsePredicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithProtobufferDecodableObject:library:;
- (id)protobufferEncodableObjectFromLibrary:;
- (void).cxx_destruct;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)initWithConditionPredicate:thenPredicate:elsePredicate:;
- (id)conditionPredicate;
- (id)thenPredicate;
- (id)elsePredicate;
- (id)_ML3PredicateForEntityTypeSelector:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:thenPredicate:elsePredicate:;
@end
