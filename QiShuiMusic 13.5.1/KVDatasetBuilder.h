@interface KVDatasetBuilder : NSObject
- (BOOL)_finishWithError:;
- (id)init;
- (id)addItem:error:;
- (void).cxx_destruct;
- (id)initWithDatasetInfo:writer:error:;
@end
