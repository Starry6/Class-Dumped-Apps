@interface AWERVLVAnchorViewCell : UICollectionViewCell
@property (nonatomic) AWERVAnchorItemView itemView;
@property (nonatomic) AWELVideoEntranceInfoModel model;
@property (nonatomic) NSString contentStr;
- (id)contentStr;
- (void)setContentStr:;
- (void)updateCellWithModel:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:;
- (id)cellSize;
- (void)setupUI;
- (id)itemView;
- (void)setItemView:;
@end
