@interface AWEUserWorkCellVirtualLabel : AWERLVirtualLabel
@property (nonatomic) @? viewUpdateBlock;
@property (nonatomic) @? viewLayoutBlock;
- (void)updateFrameForRenderedView:;
- (void)updateAttributesForRenderedView:;
- (id)viewUpdateBlock;
- (void)setViewUpdateBlock:;
- (id)viewLayoutBlock;
- (void)setViewLayoutBlock:;
- (void).cxx_destruct;
@end
