@interface CADEventCreatedFromSuggestionPredicate : EKPredicate
@property (nonatomic) NSString opaqueKey;
@property (nonatomic) NSString extractionGroupIdentifier;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (BOOL)isEqual:;
- (id)opaqueKey;
- (id)initWithExtractionGroupIdentifier:;
- (id)initWithOpaqueKey:;
- (id)extractionGroupIdentifier;
- (id)copyMatchingItemsWithDatabase:;
- (id)initWithOpaqueKey:extractionGroupIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForAllSuggestedEvents;
@end
