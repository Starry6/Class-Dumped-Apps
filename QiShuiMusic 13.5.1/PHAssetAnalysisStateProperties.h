@interface PHAssetAnalysisStateProperties : PHAssetPropertySet
@property (nonatomic) NSMutableDictionary fetchDictionariesByWorkerType;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (int)analysisStateForWorkerType:outLastIgnoreDate:outIgnoreUntilDate:;
- (id)fetchDictionariesByWorkerType;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
@end
