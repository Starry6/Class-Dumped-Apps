@interface AWEFilterTabSelectView : UIView
@property (nonatomic) UIButton filterBtn;
@property (nonatomic) UIButton adjustBtn;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) @? changedBlk;
@property (nonatomic) UILabel newTipsLabel;
@property (nonatomic) q currentType;
- (void)didClick:;
- (void)setCurrentType:;
- (id)filterBtn;
- (void)setFilterBtn:;
- (void)showAdjustNewTipsIfNeeded;
- (void)selectType:;
- (void)setAdjustBtn:;
- (id)newTipsLabel;
- (id)adjustBtn;
- (id)changedBlk;
- (void)setChangedBlk:;
- (void)didChanged:;
- (void)setNewTipsLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)bottomLine;
- (void)setBottomLine:;
- (long long)currentType;
@end
