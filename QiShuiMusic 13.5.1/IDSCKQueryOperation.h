@interface IDSCKQueryOperation : IDSCKDatabaseOperation
@property (nonatomic) @? recordFetchedBlock;
@property (nonatomic) @? completionBlock;
- (void)setRecordFetchedBlock:;
- (id)recordFetchedBlock;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
+ (id)alloc;
+ (Class)__class;
@end
