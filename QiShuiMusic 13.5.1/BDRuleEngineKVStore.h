@interface BDRuleEngineKVStore : NSObject
+ (id)allKeysWithUniqueID:;
+ (void)clearAllWithUniqueID:;
+ (void)closeWithUniqueID:;
+ (BOOL)containsKey:uniqueID:;
+ (id)objectOfClass:forKey:uniqueID:;
+ (void)removeValueForKey:uniqueID:;
+ (BOOL)setObject:forKey:uniqueID:;
+ (BOOL)setString:forKey:uniqueID:;
+ (id)stringForKey:uniqueID:;
+ (Class)store;
@end
