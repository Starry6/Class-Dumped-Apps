@interface AWERichAwemeGoodButtonBusinessImpl : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowButtonWithModel:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (id)convertColorToRGBA:;
- (void)onButtonTap:;
- (void)openGoodDetailPageWithModel:;
- (void)p_elementDidShow;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
