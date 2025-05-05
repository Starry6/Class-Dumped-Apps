@interface AWEBindingManager : NSObject
@property (nonatomic) NSMutableSet bindingSet;
@property (nonatomic) NSLock lock;
- (BOOL)addBinding:;
- (id)bindingSet;
- (void)removeAllBindingsByObject:;
- (void)removeBinding:;
- (void)setBindingSet:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)removeAllBindings;
@end
