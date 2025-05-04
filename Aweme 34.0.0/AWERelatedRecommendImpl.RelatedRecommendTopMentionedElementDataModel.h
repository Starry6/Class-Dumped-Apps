@interface AWERelatedRecommendImpl.RelatedRecommendTopMentionedElementDataModel : NSObject
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) AWEAwemeModel currentModel;
- (void)setContainer:;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (id)context;
- (id)currentModel;
@end
