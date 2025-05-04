@interface AWEBindingKVO : NSObject
@property (nonatomic) <NSCopying> objectHashKey;
@property (nonatomic) @? handler;
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
- (id)currentObjectValue;
- (void)registHandler:;
- (void)disposeByObject:;
- (id)hashKeyByObject:;
- (void)addToKVOManager;
- (id)objectHashKey;
- (void)setObjectHashKey:;
- (void)setHandler:;
- (id)keyPath;
- (id)object;
- (void)setKeyPath:;
- (id)handler;
- (void).cxx_destruct;
- (void)setObject:;
- (id)initWithObject:keyPath:;
@end
