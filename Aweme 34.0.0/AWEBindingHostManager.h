@interface AWEBindingHostManager : NSObject
@property (nonatomic) BOOL callDealloc;
@property (nonatomic) NSMutableSet bindings;
@property (nonatomic) NSLock lock;
- (void)addBinding:;
- (void)removeBinding:;
- (BOOL)callDealloc;
- (id)initWithCallDealloc:;
- (void)setCallDealloc:;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)bindings;
- (void)removeAllBindings;
- (void)setBindings:;
@end
