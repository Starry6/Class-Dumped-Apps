@interface AWEKnowledgeRichContentImpl.RichAwemeButtonElementViewController : NSObject
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (BOOL)shouldShowElementWithModel:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (id)init;
- (void).cxx_destruct;
@end
