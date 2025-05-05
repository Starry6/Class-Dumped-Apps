@interface CNOrderedDictionary : NSObject
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSArray allObjects;
- (id)init;
- (id)allKeys;
- (unsigned long long)hash;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)allObjects;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)orderedDictionary;
+ (id)dictionaryWithObject:forKey:;
@end
