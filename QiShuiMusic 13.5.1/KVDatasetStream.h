@interface KVDatasetStream : NSObject
@property (nonatomic) Q priorVersion;
@property (nonatomic) S errorCode;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (unsigned short)errorCode;
- (unsigned long long)priorVersion;
- (void)finish:;
- (BOOL)addItem:error:;
- (BOOL)_flushItemsWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:itemType:service:payload:flushThreshold:;
- (BOOL)removeItemId:error:;
+ (id)streamWithName:itemType:service:payload:;
@end
