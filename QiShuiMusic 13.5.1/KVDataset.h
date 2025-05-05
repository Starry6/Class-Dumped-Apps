@interface KVDataset : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:usingBlock:;
- (id)description;
- (id)datasetInfo;
- (id)initWithReader:;
@end
