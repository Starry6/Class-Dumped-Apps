@interface PNSKVStoreImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)allKeysWithUniqueID:;
+ (void)clearAllWithUniqueID:;
+ (void)closeWithUniqueID:;
+ (BOOL)containsKey:uniqueID:;
+ (void)initializeKVStore;
+ (id)mmkvWithID:;
+ (id)objectOfClass:forKey:uniqueID:;
+ (void)removeValueForKey:uniqueID:;
+ (BOOL)setObject:forKey:uniqueID:;
+ (BOOL)setString:forKey:uniqueID:;
+ (id)stringForKey:uniqueID:;
@end
