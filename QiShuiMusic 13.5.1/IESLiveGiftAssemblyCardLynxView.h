@interface IESLiveGiftAssemblyCardLynxView : UIView
@property (nonatomic) PuzzleHybridContainer giftBuffContainer;
@property (nonatomic) IESLiveGiftAssemblySectionViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (id)giftBuffContainer;
- (void)loadLynxView;
- (id)lynxDataWithViewModel:isFirstRender:;
- (void)removeCurrentLynxViewIfNeeded;
- (id)sectionVM;
- (void)setGiftBuffContainer:;
- (void)setSectionVM:;
- (void)viewDidFinishLoadWithURL:;
- (id)viewModel;
- (void)setup;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)initWithFrame:viewModel:;
@end
