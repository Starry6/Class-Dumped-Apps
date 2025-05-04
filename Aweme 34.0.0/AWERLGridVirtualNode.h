@interface AWERLGridVirtualNode : AWERLVirtualNode
@property (nonatomic) NSMutableArray children;
@property (nonatomic) @? itemSizeBlock;
@property (nonatomic) {AWERLGridStyle={CGSize=dd}{UIEdgeInsets=dddd}dd} style;
- (id)createLayoutNode;
- (id)initWithSize:style:props:children:;
- (void)updateChildren:;
- (id)initWithSize:style:itemSizeBlock:props:children:;
- (id)itemSizeBlock;
- (void)setItemSizeBlock:;
- (id)children;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (id)childAtIndex:;
- (void)setChildren:;
- (unsigned long long)numberOfChildren;
@end
