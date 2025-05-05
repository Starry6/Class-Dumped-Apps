@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult
@property (nonatomic) NSAsynchronousFetchRequest fetchRequest;
@property (nonatomic) NSArray finalResult;
- (void)dealloc;
- (id)initForFetchRequest:withContext:andProgress:completetionBlock:;
- (id)finalResult;
- (void)setOperationError:;
- (id)fetchRequest;
@end
