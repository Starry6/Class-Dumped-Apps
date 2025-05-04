@interface AWERLViewReusePool2 : NSObject
@property (nonatomic) NSMutableArray pool;
@property (nonatomic) q position;
@property (nonatomic) NSString key;
- (id)popViewForContainerView:creator:;
- (void)setKey:;
- (long long)position;
- (void)setPool:;
- (id)key;
- (id)pool;
- (void).cxx_destruct;
- (void)reset;
- (void)setPosition:;
- (id)initWithKey:;
@end
