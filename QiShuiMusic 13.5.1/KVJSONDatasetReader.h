@interface KVJSONDatasetReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:usingBlock:;
- (id)description;
- (id)datasetInfo;
@end
