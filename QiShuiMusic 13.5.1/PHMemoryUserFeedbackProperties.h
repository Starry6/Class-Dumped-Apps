@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet
@property (nonatomic) PHUserFeedback userFeedback;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:memory:prefetched:;
- (id)userFeedback;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
@end
