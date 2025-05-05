@interface RACKVOTrampoline : RACDisposable
@property (nonatomic) NSString keyPath;
@property (nonatomic) @? block;
@property (nonatomic) NSObject unsafeTarget;
@property (nonatomic) NSObject weakTarget;
@property (nonatomic) NSObject observer;
- (id)initWithTarget:observer:keyPath:options:block:;
- (id)unsafeTarget;
- (id)block;
- (void)dealloc;
- (void)dispose;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)observer;
- (id)weakTarget;
@end
