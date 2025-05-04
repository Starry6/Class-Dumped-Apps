@interface AWECommonUserListBaseCell : AWERelationListUserBaseCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) AWERelationListCellBaseViewModel adapterModel;
@property (nonatomic) @? moreButtonClickBlock;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)actionBtnClicked;
- (void)layoutNameAndDesc;
- (void)setAdapterModel:;
- (void)setDescLabelModel:;
- (id)moreButtonClickBlock;
- (void)moreBtnClicked;
- (void)setMoreButtonClickBlock:;
- (id)adapterModel;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)moreButton;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (void)layoutSubviews;
- (void)setupUI;
- (double)avatarWidth;
+ (id)_defaultImage;
@end
