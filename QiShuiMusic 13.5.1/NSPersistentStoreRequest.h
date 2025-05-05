@interface NSPersistentStoreRequest : NSObject
@property (nonatomic) NSArray affectedStores;
@property (nonatomic) Q requestType;
- (void)_setSecureOperation:;
- (unsigned long long)requestType;
- (id)affectedStores;
- (void)setAffectedStores:;
- (void)dealloc;
- (BOOL)_secureOperation;
- (id)copyWithZone:;
@end
