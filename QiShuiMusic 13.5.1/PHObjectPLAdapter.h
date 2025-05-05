@interface PHObjectPLAdapter : NSObject
@property (nonatomic) PLManagedObject backingManagedObject;
@property (nonatomic) NSMutableOrderedSet ignoredKeys;
@property (nonatomic) NSMutableDictionary modifiedKeyValues;
@property (nonatomic) PHPhotoLibrary photoLibrary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (void)setObject:forKey:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (id)newObjectWithPropertySets:;
- (id)mutableAccessingCopy;
- (id)initWithPLManagedObject:photoLibrary:;
- (id)backingManagedObject;
- (id)ignoredKeys;
- (void)setIgnoredKeys:;
- (id)modifiedKeyValues;
- (void)setModifiedKeyValues:;
@end
