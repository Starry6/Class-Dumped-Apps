@interface AWESearchAIGCPopover : UIView
@property (nonatomic) NSArray data;
@property (nonatomic) @? contentSizeBlock;
@property (nonatomic) @? dataBlock;
@property (nonatomic) @? selectItemBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)duxPopover_view;
- (void)setContentSizeBlock:;
- (id)contentSizeBlock;
- (void)setSelectItemBlock:;
- (id)selectItemBlock;
- (id)intrinsicContentSize;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupSubviews;
- (void)setupData;
- (id)dataBlock;
- (void)setDataBlock:;
@end
