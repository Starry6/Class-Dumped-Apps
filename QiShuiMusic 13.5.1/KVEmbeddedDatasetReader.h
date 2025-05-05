@interface KVEmbeddedDatasetReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:usingBlock:;
- (id)description;
- (id)datasetInfo;
- (id)initWithData:dataset:error:;
@end
