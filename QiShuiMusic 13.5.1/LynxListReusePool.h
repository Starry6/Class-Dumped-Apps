@interface LynxListReusePool : NSObject
@property (nonatomic) NSMutableDictionary pool;
@property (nonatomic) NSMutableDictionary reuseIdentifierMap;
- (id)dequeueReusableCellInIndex:withReuseIdentifier:;
- (void)enqueueReusableCell:;
- (id)reuseIdentifierMap;
- (void)setReuseIdentifierMap:;
- (id)init;
- (void)setPool:;
- (void).cxx_destruct;
- (id)pool;
- (void)registerClass:forCellReuseIdentifier:;
@end
