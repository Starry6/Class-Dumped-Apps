@interface IESECGoodsFeedProductController : NSObject
@property (nonatomic) IESECGoodsFeedContext context;
@property (nonatomic) UIView rootView;
@property (nonatomic) <IESECGoodsFeedContainerProtocol> container;
@property (nonatomic) <IESECGoodsFeedOperationProtocol> goodsFeedListDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initProductCard;
- (void)completion:;
- (void)errorResponse:error:;
- (void)fetchGoodsCardCompletionResponse:error:;
- (id)goodsFeedListDelegate;
- (id)handleResponse:request:error:type:;
- (void)requestGoodsCard;
- (void)setGoodsFeedListDelegate:;
- (void)successResponse:request:error:responseType:;
- (void)updateFirstCardViewModelWithParams:completion:;
- (void)updateLargeCardData:error:;
- (void)initialized;
- (void)setContainer:;
- (id)context;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:;
- (id)rootView;
- (void)setRootView:;
@end
