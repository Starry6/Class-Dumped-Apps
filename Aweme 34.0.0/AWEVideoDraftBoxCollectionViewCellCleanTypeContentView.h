@interface AWEVideoDraftBoxCollectionViewCellCleanTypeContentView : UIView
@property (nonatomic) UIView topBgView;
@property (nonatomic) UILabel draftSizeLabel;
@property (nonatomic) UIView publishView;
@property (nonatomic) UIButton selectButton;
@property (nonatomic) UIImageView selectIcon;
- (id)selectIcon;
- (void)setPublishView:;
- (id)publishView;
- (id)topBgView;
- (void)setTopBgView:;
- (void)updateWithSelected:;
- (void)updateWithEditing:;
- (id)draftSizeLabel;
- (void)setDraftSizeLabel:;
- (void)setSelectIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)selectButton;
- (void)setSelectButton:;
@end
