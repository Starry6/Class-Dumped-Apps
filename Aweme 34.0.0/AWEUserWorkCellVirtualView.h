@interface AWEUserWorkCellVirtualView : AWERLVirtualView
@property (nonatomic) @? viewCreateBlock;
@property (nonatomic) @? viewUpdateBlock;
@property (nonatomic) @? viewLayoutBlock;
- (void)updateFrameForRenderedView:;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:;
- (id)viewCreateBlock;
- (void)setViewCreateBlock:;
- (id)viewUpdateBlock;
- (void)setViewUpdateBlock:;
- (id)viewLayoutBlock;
- (void)setViewLayoutBlock:;
- (void).cxx_destruct;
@end
