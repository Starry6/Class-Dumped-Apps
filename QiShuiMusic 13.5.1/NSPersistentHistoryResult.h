@interface NSPersistentHistoryResult : NSPersistentStoreResult
@property (nonatomic) @ result;
@property (nonatomic) q resultType;
- (id)result;
- (void)dealloc;
- (long long)resultType;
- (id)initWithResultType:andResult:;
- (id)description;
- (id)initWithSubresults:;
+ (id)_processResult:forRequest:withProvider:;
@end
