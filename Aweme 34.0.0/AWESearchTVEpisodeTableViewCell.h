@interface AWESearchTVEpisodeTableViewCell : UITableViewCell
@property (nonatomic) NSMutableArray buttonArray;
@property (nonatomic) NSMutableArray vipLabelArray;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) @? buttonClickedBlock;
- (void)setModelArray:;
- (id)modelArray;
- (void)setButtonArray:;
- (id)buttonArray;
- (void)setButtonClickedBlock:;
- (id)vipLabelArray;
- (void)updatePaymentStatus:withLabel:;
- (id)buttonClickedBlock;
- (void)setVipLabelArray:;
- (void)updateButtonFrame;
- (void)configEpisodeList:;
- (void)buttonTapped:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (double)tableCellHeight;
@end
