@interface AWEKnowledgeRichContentImpl.RichAwemeDescriptionElementViewController : NSObject
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
- (void)hideExtraDescription:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (BOOL)shouldShowElementWithModel:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)shouldShowElementWithContext:;
@end
