@interface MPMediaPersistentIDsPredicate : MPMediaPredicate
@property (nonatomic) Q count;
@property (nonatomic) r^q persistentIDs;
@property (nonatomic) BOOL shouldContain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithProtobufferDecodableObject:library:;
- (id)protobufferEncodableObjectFromLibrary:;
- (id)ML3PredicateForTrack;
- (id)description;
- (unsigned long long)count;
- (id)ML3PredicateForContainer;
- (BOOL)isEqual:;
- (id)persistentIDs;
- (BOOL)shouldContain;
- (id)_ML3PredicateForEntityClass:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:count:shouldContain:;
@end
