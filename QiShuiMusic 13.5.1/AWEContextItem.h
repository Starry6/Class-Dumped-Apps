@interface AWEContextItem : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) @ object;
@property (nonatomic) NSMutableArray handlerArray;
- (void)callHandler:;
- (id)handlerArray;
- (void)removeHandlers;
- (void)setHandlerArray:;
- (void)setObject:;
- (void)addHandler:;
- (id)lock;
- (void).cxx_destruct;
- (id)object;
- (void)removeHandler:;
- (void)setLock:;
- (void)post;
@end
