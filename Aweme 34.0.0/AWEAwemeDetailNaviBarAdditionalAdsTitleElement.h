@interface AWEAwemeDetailNaviBarAdditionalAdsTitleElement : AWEAwemeDetailNaviBarBaseElement
@property (nonatomic) UILabel positionLabel;
@property (nonatomic) UILabel titleLabel;
- (void)updatePositionLabelText:;
- (void)scrollViewDidScroll:currentIndex:totalCount:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)positionLabel;
- (void)setPositionLabel:;
@end
