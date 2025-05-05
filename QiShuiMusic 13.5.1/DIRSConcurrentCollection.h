@interface DIRSConcurrentCollection : NSObject
- (id)access:;
- (void)operate:;
- (void)addObserver:forKeyPath:options:context:;
- (id)init;
- (void)dealloc;
- (id)rawValue;
- (void)removeObserver:forKeyPath:context:;
- (void).cxx_destruct;
+ (id)collectionWithRaw:;
@end
