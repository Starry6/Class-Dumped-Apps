@interface KVStreamDatasetReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithData:error:;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:usingBlock:;
- (id)description;
- (id)datasetInfo;
@end
