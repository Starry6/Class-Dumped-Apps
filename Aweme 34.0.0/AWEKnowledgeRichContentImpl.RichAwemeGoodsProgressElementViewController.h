@interface AWEKnowledgeRichContentImpl.RichAwemeGoodsProgressElementViewController : NSObject
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
- (void)updateProgressFromIndex:toIndex:method:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (BOOL)shouldShowElementWithModel:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)shouldShowElementWithContext:;
@end
