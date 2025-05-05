@interface NSBatchDeleteResult : NSPersistentStoreResult
@property (nonatomic) @ result;
@property (nonatomic) Q resultType;
- (id)result;
- (void)dealloc;
- (id)initWithResultType:andObject:;
- (unsigned long long)resultType;
- (id)initWithSubresults:;
@end
