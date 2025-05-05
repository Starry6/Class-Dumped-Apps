@interface WFContextualActionFilteringBehavior : NSObject
@property (nonatomic) NSSet matchingTypes;
@property (nonatomic) NSPredicate inClientPredicate;
@property (nonatomic) NSPredicate daemonPredicate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithMatchingTypes:inClientPredicate:daemonPredicate:;
- (id)matchingTypes;
- (id)inClientPredicate;
- (id)daemonPredicate;
+ (BOOL)supportsSecureCoding;
+ (id)matchAllFiles;
+ (id)filteringWithMatchingTypes:predicate:;
+ (id)filteringWithMatchingTypes:predicate:daemonPredicate:;
@end
