@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest
@property (nonatomic) NSFetchRequest fetchRequest;
@property (nonatomic) @? completionBlock;
@property (nonatomic) q estimatedResultCount;
- (unsigned long long)requestType;
- (long long)estimatedResultCount;
- (void)dealloc;
- (id)initWithFetchRequest:completionBlock:;
- (void)setEstimatedResultCount:;
- (id)description;
- (id)completionBlock;
- (id)fetchRequest;
@end
