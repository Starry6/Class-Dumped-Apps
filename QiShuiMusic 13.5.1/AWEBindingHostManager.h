@interface AWEBindingHostManager : NSObject
@property (nonatomic) BOOL callDealloc;
@property (nonatomic) NSMutableSet bindings;
@property (nonatomic) NSLock lock;
- (void)setCallDealloc:;
- (void)addBinding:;
- (BOOL)callDealloc;
- (id)initWithCallDealloc:;
- (void)removeBinding:;
- (void)dealloc;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)bindings;
- (void)removeAllBindings;
- (void)setBindings:;
@end
