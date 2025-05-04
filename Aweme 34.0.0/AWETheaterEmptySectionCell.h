@interface AWETheaterEmptySectionCell : UICollectionViewCell
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) AWETheaterSectionModel model;
@property (nonatomic) UIView containerView;
- (void)configWithContext:model:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
@end
