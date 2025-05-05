@interface PHFacePropertySet : NSObject
@property (nonatomic) PHFace face;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)face;
- (id)initWithFetchDictionary:face:prefetched:;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (id)propertiesToPrefetch;
@end
