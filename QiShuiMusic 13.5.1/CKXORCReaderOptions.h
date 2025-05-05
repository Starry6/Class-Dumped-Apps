@interface CKXORCReaderOptions : NSObject
@property (nonatomic) NSString testExceptionDuringLoadBatch;
@property (nonatomic) Q testExceptionDuringLoadBatchLoadsToSkip;
@property (nonatomic) Q batchSize;
- (id)init;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void).cxx_destruct;
- (id)initWithBatchSize:;
- (id)testExceptionDuringLoadBatch;
- (void)setTestExceptionDuringLoadBatch:;
- (unsigned long long)testExceptionDuringLoadBatchLoadsToSkip;
- (void)setTestExceptionDuringLoadBatchLoadsToSkip:;
@end
