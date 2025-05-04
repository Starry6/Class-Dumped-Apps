@interface AWERichAwemeGoodProgressBusinessImpl : NSObject
@property (nonatomic) AWERichGoodsProgressView progressView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIView aView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
- (void)updateProgressFromIndex:toIndex:method:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (BOOL)shouldShowElementWithModel:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (void)goodsProgressScrollToIndex:;
- (id)aView;
- (void)setAView:;
- (void)setModel:;
- (id)progressView;
- (void)setProgressView:;
- (id)model;
- (void).cxx_destruct;
+ (BOOL)shouldShowElementWithContext:;
@end
