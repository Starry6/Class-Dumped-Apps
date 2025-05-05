@interface ByteBenchStrategySubscribeOC : NSObject
@property (nonatomic) @? subscribeBlock;
@property (nonatomic) NSInteger appId;
- (void)fetchStrategy;
- (void)setSubscribeBlock:;
- (id)subscribeBlock;
- (void)subscribeWithModels:block:;
- (void)dealloc;
- (int)appId;
- (void)setAppId:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAppid:;
@end
