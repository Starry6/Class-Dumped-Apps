@interface PHAssetPhotoCommentProperties : PHAssetPropertySet
@property (nonatomic) Q commentCount;
@property (nonatomic) Q likeCount;
@property (nonatomic) BOOL hasUserLiked;
- (id)initWithFetchDictionary:asset:prefetched:;
- (unsigned long long)commentCount;
- (unsigned long long)likeCount;
- (BOOL)hasUserLiked;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
@end
