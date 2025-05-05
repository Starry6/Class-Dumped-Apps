@interface IESHookAssetWriter : AVAssetWriter
@property (nonatomic) NSMutableDictionary observers;
@property (nonatomic) NSLock lock;
- (void)removeObserver:forKeyPath:;
- (void)addObserver:forKeyPath:options:context:;
- (id)lock;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (void)setLock:;
@end
