@interface AWEBindingKVOManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary objectMap;
- (void)unObserve:object:objectHashKey:;
- (id)getBindingArray:keyPath:;
- (id)hashKeyByObject:;
- (void)observe:objectHashKey:;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)objectMap;
- (void)setObjectMap:;
+ (id)sharedInstance;
@end
