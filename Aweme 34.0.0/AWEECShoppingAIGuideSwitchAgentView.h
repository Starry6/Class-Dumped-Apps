@interface AWEECShoppingAIGuideSwitchAgentView : UIView
@property (nonatomic) NSArray dataArray;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) NSMutableArray itemViewArray;
@property (nonatomic) @? switchItemClickBlk;
- (id)itemViewArray;
- (id)switchItemClickBlk;
- (id)initWithFrame:dataArray:bgImage:;
- (void)renderWithDefaultSelectedIndex:;
- (void)configSelectedIndex:;
- (void)updateBGImageView:;
- (void)setSwitchItemClickBlk:;
- (void)setItemViewArray:;
- (void)setSelectedIndex:;
- (unsigned long long)selectedIndex;
- (void).cxx_destruct;
- (id)dataArray;
- (void)setDataArray:;
- (void)setBgImageView:;
- (id)bgImageView;
- (void)buildConstraints;
@end
