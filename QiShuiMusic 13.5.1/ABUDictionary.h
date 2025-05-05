@interface ABUDictionary : NSObject
@property (nonatomic) NSDictionary internalDict;
@property (nonatomic) Q count;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSArray allValues;
- (id)convertToNSDictionary;
- (id)internalDict;
- (void)setInternalDict:;
- (id)valueForKey:;
- (id)allKeys;
- (id)debugDescription;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)allValues;
- (id)description;
- (id)forwardingTargetForSelector:;
- (unsigned long long)count;
- (id)allKeysForObject:;
- (id)__swift_objectForKeyedSubscript:;
+ (id)dictionaryWithDictionary:array:;
+ (long long)hasLabelApiCalled;
@end
