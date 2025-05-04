@interface AWEBindingManager : NSObject
@property (nonatomic) NSMutableSet bindingSet;
@property (nonatomic) NSLock lock;
- (BOOL)addBinding:;
- (void)removeBinding:;
- (id)bindingSet;
- (void)removeAllBindingsByObject:;
- (void)setBindingSet:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (void)removeAllBindings;
@end
