@interface PHAssetKeywordProperties : PHAssetPropertySet
@property (nonatomic) NSSet keywordTitles;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (id)keywordTitles;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
@end
