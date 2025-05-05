@interface AWEVideoObjectPool : NSObject
@property (nonatomic) NSMutableArray pool;
@property (nonatomic) # objectClass;
@property (nonatomic) Q maxCount;
- (id)initWithClass:maxCount:;
- (Class)objectClass;
- (unsigned long long)maxCount;
- (void)setMaxCount:;
- (void)returnObject:;
- (id)getObject;
- (void)setPool:;
- (void).cxx_destruct;
- (id)pool;
- (void)setObjectClass:;
@end
