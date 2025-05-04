@interface AWEPOIUgcBottomBarView : UIView
@property (nonatomic) AWEPOIUgcBottomBarModel model;
@property (nonatomic) @? onBtnClickedBlk;
@property (nonatomic) UIImageView backgroundImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView btnsContainer;
@property (nonatomic) NSArray iconBtns;
- (id)backgroundImgView;
- (void)onBtnClick:;
- (void)setOnBtnClickedBlk:;
- (void)updateTitleColor:borderColor:;
- (id)btnsContainer;
- (id)createControlWithIconModel:;
- (void)setIconBtns:;
- (id)iconBtns;
- (id)onBtnClickedBlk;
- (void)setBackgroundImgView:;
- (void)setBtnsContainer:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)createSeparatorView;
- (void)setupUI;
@end
