@interface AspectIdentifier : NSObject
@property (nonatomic) : selector;
@property (nonatomic) @ block;
@property (nonatomic) NSMethodSignature blockSignature;
@property (nonatomic) @ object;
@property (nonatomic) Q options;
- (BOOL)invokeWithInfo:;
- (id)blockSignature;
- (void)setBlockSignature:;
- (SEL)selector;
- (id)block;
- (void)setOptions:;
- (void)setObject:;
- (void)setSelector:;
- (BOOL)remove;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)object;
- (void)setBlock:;
- (id)description;
+ (id)identifierWithSelector:object:options:block:error:;
@end
