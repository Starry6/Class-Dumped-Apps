@interface IESECGoodsFeedShowRequest : IESECGoodsDetailShowRequest
@property (nonatomic) BOOL needOneStepOrder;
@property (nonatomic) @? oneStepOrderCompletion;
@property (nonatomic) NSString feedSessionId;
- (id)feedSessionId;
- (BOOL)needOneStepOrder;
- (id)oneStepOrderCompletion;
- (void)setFeedSessionId:;
- (void)setNeedOneStepOrder:;
- (void)setOneStepOrderCompletion:;
- (id)init;
- (void).cxx_destruct;
@end
