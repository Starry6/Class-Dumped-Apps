@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult
@property (nonatomic) NSError operationError;
@property (nonatomic) NSManagedObjectContext managedObjectContext;
@property (nonatomic) NSProgress progress;
- (id)managedObjectContext;
- (void)_cancelProgress;
- (void)cancel;
- (void)dealloc;
- (id)progress;
- (id)operationError;
- (BOOL)_isCancelled;
- (id)initWithContext:andProgress:completetionBlock:;
- (void)setOperationError:;
@end
