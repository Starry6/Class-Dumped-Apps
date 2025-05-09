@interface AWEFollowListUserBaseCell : AWERelationListUserBaseCell
@property (nonatomic) BOOL revertLibra;
@property (nonatomic) AWEInsetsLabel desWithBorderLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWEFollowListEntranceView entranceView;
@property (nonatomic) UIView onlineDotView;
@property (nonatomic) MASConstraint centerYConstraint;
@property (nonatomic) MASConstraint topConstraint;
@property (nonatomic) AWEConcernFansLabelView fansLabelView;
@property (nonatomic) NSArray fansTagArray;
@property (nonatomic) BOOL showOnlineDotView;
@property (nonatomic) BOOL shouldCenterTitle;
@property (nonatomic) AWEFollowListEntranceContentModel entranceContentModel;
@property (nonatomic) AWEConcernFansLabelModel fansLabelModel;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)actionBtnClicked;
- (void)setOnlineDotView:;
- (id)onlineDotView;
- (id)fansTagArray;
- (void)setFansTagArray:;
- (void)updateTitleAndDescConstraints;
- (id)aAWEBrandColorAdapter;
- (void)configUI;
- (id)entranceView;
- (void)setDescLabelModel:;
- (id)fansLabelModel;
- (void)setShowOnlineDotView:;
- (void)setNameLabelModel:;
- (BOOL)showOnlineDotView;
- (id)desWithBorderLabel;
- (id)fansLabelView;
- (BOOL)revertLibra;
- (BOOL)shouldCenterTitle;
- (void)updateDesLabel:showBorder:;
- (void)setFansLabelModel:;
- (void)setShouldCenterTitle:;
- (void)setEntranceContentModel:;
- (void)setRevertLibra:;
- (void)setDesWithBorderLabel:;
- (void)setEntranceView:;
- (void)setFansLabelView:;
- (id)entranceContentModel;
- (void)setTopConstraint:;
- (id)initWithFrame:;
- (id)topConstraint;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)centerYConstraint;
- (void)setCenterYConstraint:;
- (void)setNameLabel:;
- (id)actionButton;
- (void)setActionButton:;
- (double)avatarWidth;
+ (Class)aAWEBrandColorAdapterClass;
@end
