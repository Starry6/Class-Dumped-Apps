@interface CKOrderedDictionary : NSObject
@property (nonatomic) Q count;
- (id)init;
- (id)dictionaryRepresentationRecursive:;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)addObject:forKey:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)initWithCapacity:;
+ (id)orderedDictionaryWithCapacity:;
+ (id)orderedDictionary;
@end
