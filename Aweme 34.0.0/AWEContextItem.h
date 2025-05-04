@interface AWEContextItem : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) @ object;
@property (nonatomic) NSMutableArray handlerArray;
- (void)removeHandlers;
- (id)handlerArray;
- (void)callHandler:;
- (void)setHandlerArray:;
- (void)setLock:;
- (id)object;
- (id)lock;
- (void).cxx_destruct;
- (void)addHandler:;
- (void)removeHandler:;
- (void)setObject:;
- (void)post;
@end
