@interface DIRSFMDatabaseQueue : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSInteger openFlags;
- (id)path;
- (id)init;
- (void)dealloc;
- (void)setPath:;
- (void)close;
- (void)inTransaction:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)database;
- (id)inSavePoint:;
- (id)initWithPath:flags:vfs:;
- (id)initWithPath:flags:;
- (void)inDatabase:;
- (void)beginTransaction:withBlock:;
- (void)inDeferredTransaction:;
- (int)openFlags;
+ (id)databaseQueueWithPath:;
+ (id)databaseQueueWithPath:flags:;
+ (Class)databaseClass;
@end
