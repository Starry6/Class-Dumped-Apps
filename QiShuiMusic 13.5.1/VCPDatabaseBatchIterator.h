@interface VCPDatabaseBatchIterator : NSObject
@property (nonatomic) PHAsset asset;
@property (nonatomic) NSDictionary analysis;
- (BOOL)next;
- (id)asset;
- (void)nextBatch;
- (void).cxx_destruct;
- (id)analysis;
- (id)initWithDatabaseReader:forAssets:resultsTypes:batchSize:;
+ (id)iteratorForAssets:withDatabaseReader:resultTypes:batchSize:;
@end
