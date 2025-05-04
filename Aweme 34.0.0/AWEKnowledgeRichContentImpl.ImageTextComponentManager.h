@interface AWEKnowledgeRichContentImpl.ImageTextComponentManager : NSObject
@property (nonatomic) <AWEImageTextHandlerProtocol> handler;
@property (nonatomic) <AWEImageTextSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) <AWEImageTextSectionControllerProtocol> sectionController;
- (void)executeSelector:inProtocol:withArgs:;
- (id)findBaseComponentWith:;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (void)setHandler:;
- (void)setSectionController:;
- (id)init;
- (id)handler;
- (id)sectionController;
- (void).cxx_destruct;
@end
