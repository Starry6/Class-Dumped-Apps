@interface IESECGoodsDetailBottomNewTipCell : UIView
@property (nonatomic) IESECTextWithIconElement tipModel;
@property (nonatomic) UILabel tipLabel;
- (id)initWithFrame:tipModel:;
- (void)openAddrBook;
- (void)setTipModel:;
- (id)tipModel;
- (void)updateContent;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setupUI;
@end
