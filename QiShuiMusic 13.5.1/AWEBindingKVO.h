@interface AWEBindingKVO : NSObject
@property (nonatomic) NSString objectHashKey;
@property (nonatomic) @? handler;
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
- (void)addToKVOManager;
- (id)currentObjectValue;
- (void)disposeByObject:;
- (id)hashKeyByObject:;
- (id)objectHashKey;
- (void)registHandler:;
- (void)setObjectHashKey:;
- (void)setObject:;
- (void)setHandler:;
- (id)handler;
- (void)setKeyPath:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)object;
- (id)initWithObject:keyPath:;
@end
