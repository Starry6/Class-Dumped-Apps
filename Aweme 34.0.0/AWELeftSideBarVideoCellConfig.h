@interface AWELeftSideBarVideoCellConfig : NSObject
@property (nonatomic) double cellWidth;
@property (nonatomic) AWELeftSideBarVideoCellDataModel entryModel;
@property (nonatomic) @? showBlock;
@property (nonatomic) @? clickBlock;
@property (nonatomic) UIView topLeftView;
@property (nonatomic) double topLeftViewTopPadding;
@property (nonatomic) double topLeftViewLeftPadding;
- (void)setClickBlock:;
- (id)clickBlock;
- (double)leftSideBarStencilViewHeight;
- (id)showBlock;
- (void)setShowBlock:;
- (id)entryModel;
- (void)setEntryModel:;
- (id)topLeftView;
- (void)setTopLeftView:;
- (double)topLeftViewTopPadding;
- (void)setTopLeftViewTopPadding:;
- (double)topLeftViewLeftPadding;
- (void)setTopLeftViewLeftPadding:;
- (void).cxx_destruct;
- (double)cellWidth;
- (void)setCellWidth:;
@end
