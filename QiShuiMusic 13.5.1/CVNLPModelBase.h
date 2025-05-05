@interface CVNLPModelBase : NSObject
@property (nonatomic) CVNLPPerformance perfResults;
@property (nonatomic) NSDictionary options;
- (id)initWithOptions:;
- (id)options;
- (void).cxx_destruct;
- (unsigned long long)_blob_size:;
- (void)_copy_data_from_blob:to:;
- (void)_copy_data_from_blob:toPtr:;
- (void)_copy_data_to_blob:to:;
- (void)_copy_data_to_blob:toBuffer:;
- (void)_copy_data_to_blob_repeated:to:;
- (id)performanceResults;
- (id)perfResults;
@end
