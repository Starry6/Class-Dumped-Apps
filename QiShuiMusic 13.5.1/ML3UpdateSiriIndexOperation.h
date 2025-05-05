@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation
@property (nonatomic) NSMutableArray donators;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)_execute:;
- (void)_enumerateUserIDsWithBlock:;
- (BOOL)_performFullIndexToRevision:withDatasetStream:;
- (BOOL)_performIncrementalIndexToRevision:withDatasetStream:;
- (id)donators;
@end
