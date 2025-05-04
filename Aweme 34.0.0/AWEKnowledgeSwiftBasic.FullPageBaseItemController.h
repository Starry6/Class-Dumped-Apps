@interface AWEKnowledgeSwiftBasic.FullPageBaseItemController : NSObject
@property (nonatomic) _TtC22AWEKnowledgeSwiftBasic25FullPageBaseItemViewModel viewModel;
@property (nonatomic) double height;
@property (nonatomic) @? getSectionContainerBlock;
@property (nonatomic) @? heightDidChangeBlock;
@property (nonatomic) @? requireLoginBlock;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)configCellWithCell:viewModel:;
- (void)cellDidEndDisplayWithCell:viewModel:;
- (void)cellWillDisplayWithCell:viewModel:;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (id)getSectionContainerBlock;
- (void)setGetSectionContainerBlock:;
- (id)heightDidChangeBlock;
- (void)setHeightDidChangeBlock:;
- (id)requireLoginBlock;
- (void)setRequireLoginBlock:;
- (id)init;
- (void)setHeight:;
- (id)initWithViewModel:;
- (id)viewModel;
- (Class)cellClass;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)height;
@end
