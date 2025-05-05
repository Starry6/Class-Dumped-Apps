@interface IESLiveSaaSBanAlertContentView : UIView
@property (nonatomic) @? detailBlock;
- (void)setDetailBlock:;
- (id)detailBlock;
- (id)initWithTitle:subTitle:hasDetail:;
- (void)layoutUIWithTitle:subTitle:hasDetail:;
- (void)onDetailLabelClicked;
- (void).cxx_destruct;
@end
