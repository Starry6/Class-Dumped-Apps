@interface NSBatchDeleteRequest : NSPersistentStoreRequest
@property (nonatomic) Q resultType;
@property (nonatomic) NSFetchRequest fetchRequest;
- (void)_resolveEntityWithContext:;
- (void)_setSecureOperation:;
- (unsigned long long)requestType;
- (id)encodeForXPC;
- (void)dealloc;
- (id)initWithObjectIDs:;
- (void)setResultType:;
- (BOOL)shouldPerformSecureOperation;
- (unsigned long long)resultType;
- (void)setShouldPerformSecureOperation:;
- (BOOL)_secureOperation;
- (id)description;
- (id)initWithFetchRequest:;
- (id)fetchRequest;
+ (id)decodeFromXPCArchive:withContext:withPolicy:;
@end
