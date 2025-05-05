@interface PHPersonUserFeedbackProperties : PHPersonPropertySet
@property (nonatomic) PHUserFeedback userFeedback;
- (void).cxx_destruct;
- (id)userFeedback;
- (id)initWithFetchDictionary:person:prefetched:;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
@end
