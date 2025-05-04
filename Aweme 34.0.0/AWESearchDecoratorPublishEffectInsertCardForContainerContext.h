@interface AWESearchDecoratorPublishEffectInsertCardForContainerContext : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString headerCardTypeName;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> insertAfterAnchor;
@property (nonatomic) UIViewController outerFlowViewController;
@property (nonatomic) BOOL scrollToTopAfterPublish;
@property (nonatomic) BOOL disableSuggestWord;
- (id)aweme;
- (void)setAweme:;
- (void)setOuterFlowViewController:;
- (id)outerFlowViewController;
- (BOOL)scrollToTopAfterPublish;
- (void)setScrollToTopAfterPublish:;
- (id)insertAfterAnchor;
- (void)setInsertAfterAnchor:;
- (id)headerCardTypeName;
- (void)setHeaderCardTypeName:;
- (BOOL)disableSuggestWord;
- (void)setDisableSuggestWord:;
- (void).cxx_destruct;
@end
