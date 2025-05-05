@interface IESECStoreSearchHistoryHeader : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton editBtn;
@property (nonatomic) UIView editView;
@property (nonatomic) BOOL editMode;
@property (nonatomic) @? editAction;
@property (nonatomic) @? deleteAction;
- (void)deleteBtnTapped;
- (id)editBtn;
- (void)confirmBtnTapped;
- (void)editBtnTapped;
- (void)setEditBtn:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)deleteAction;
- (id)titleLabel;
- (void)setEditAction:;
- (id)editAction;
- (void)setupViews;
- (BOOL)editMode;
- (void)setEditMode:;
- (void)setDeleteAction:;
- (id)editView;
- (void)setEditView:;
@end
