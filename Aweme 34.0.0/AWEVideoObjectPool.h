@interface AWEVideoObjectPool : NSObject
@property (nonatomic) NSMutableArray pool;
@property (nonatomic) # objectClass;
@property (nonatomic) Q maxCount;
- (id)initWithClass:maxCount:;
- (void)setMaxCount:;
- (Class)objectClass;
- (unsigned long long)maxCount;
- (void)setPool:;
- (id)getObject;
- (id)pool;
- (void)returnObject:;
- (void).cxx_destruct;
- (void)setObjectClass:;
@end
