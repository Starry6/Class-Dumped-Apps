@interface AWEBindingKVOManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary objectMap;
- (id)hashKeyByObject:;
- (void)observe:objectHashKey:;
- (void)unObserve:object:objectHashKey:;
- (id)getBindingArray:keyPath:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)objectMap;
- (void)setObjectMap:;
+ (id)sharedInstance;
@end
