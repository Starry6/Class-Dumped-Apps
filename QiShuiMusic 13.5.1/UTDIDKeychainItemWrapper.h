@interface UTDIDKeychainItemWrapper : NSObject
@property (nonatomic) NSMutableDictionary keychainItemData;
@property (nonatomic) NSMutableDictionary genericPasswordQuery;
- (id)initWithIdentifier:accessGroup:;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)objectForKey:;
- (void)resetKeychainItem;
- (id)dictionaryToSecItemFormat:;
- (id)secItemFormatToDictionary:;
- (void)writeToKeychain;
- (id)keychainItemData;
- (void)setKeychainItemData:;
- (id)genericPasswordQuery;
- (void)setGenericPasswordQuery:;
@end
