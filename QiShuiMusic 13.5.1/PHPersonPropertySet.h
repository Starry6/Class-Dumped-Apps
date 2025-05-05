@interface PHPersonPropertySet : NSObject
@property (nonatomic) PHPerson person;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)person;
- (id)initWithFetchDictionary:person:prefetched:;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (id)propertiesToPrefetch;
@end
