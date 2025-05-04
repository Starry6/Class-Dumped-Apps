@interface AWEECProjectPublishToStoryHelper : NSObject
@property (nonatomic) AWEECProjectPublishToStoryController postDataController;
@property (nonatomic) <ACCPublishServiceProtocol> publishService;
@property (nonatomic) AWEShareGoodsModel goodsModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)task:needResetWithInfo:;
- (id)goodsModel;
- (void)setGoodsModel:;
- (void)setPostDataController:;
- (void)setPublishService:;
- (id)postDataController;
- (id)publishService;
- (void)dealloc;
- (void).cxx_destruct;
@end
