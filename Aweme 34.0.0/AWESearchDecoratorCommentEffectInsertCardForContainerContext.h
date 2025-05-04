@interface AWESearchDecoratorCommentEffectInsertCardForContainerContext : NSObject
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) AWESearchResultVerticalBaseViewController outerFlowViewController;
@property (nonatomic) AWESearchCardTemplateModel cardTemplate;
@property (nonatomic) BOOL scrollToTopAfterPublish;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> insertAfterAnchor;
@property (nonatomic) NSDictionary cardUIInfo;
- (id)commentModel;
- (void)setCommentModel:;
- (void)setOuterFlowViewController:;
- (id)outerFlowViewController;
- (id)cardTemplate;
- (void)setCardTemplate:;
- (BOOL)scrollToTopAfterPublish;
- (void)setScrollToTopAfterPublish:;
- (id)insertAfterAnchor;
- (void)setInsertAfterAnchor:;
- (id)cardUIInfo;
- (void)setCardUIInfo:;
- (void).cxx_destruct;
@end
