@interface IESECGoodsDetailContentLabelContainerView : UIView
@property (nonatomic) IESECGoodsDetailLongTitleTagInfoView contentInfoView;
@property (nonatomic) UILabel headLabel;
- (id)contentInfoView;
- (void)configureWithContentLabelItems:leadingGap:;
- (id)headLabel;
- (void)setContentInfoView:;
- (void)setHeadLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
