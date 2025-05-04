@interface AWEProfileHeaderVirtualView : AWERLVirtualView
@property (nonatomic) @? viewCreateBlock;
@property (nonatomic) @? fetchViewBlock;
@property (nonatomic) @? viewUpdateBlock;
@property (nonatomic) @? viewLayoutBlock;
- (void)updateFrameForRenderedView:;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:;
- (id)viewCreateBlock;
- (void)setViewCreateBlock:;
- (id)fetchViewBlock;
- (void)setFetchViewBlock:;
- (id)viewUpdateBlock;
- (void)setViewUpdateBlock:;
- (id)viewLayoutBlock;
- (void)setViewLayoutBlock:;
- (id)fetchViewToRender;
- (void).cxx_destruct;
@end
