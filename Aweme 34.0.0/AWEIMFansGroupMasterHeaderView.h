@interface AWEIMFansGroupMasterHeaderView : UICollectionReusableView
@property (nonatomic) UILabel lable;
@property (nonatomic) UIButton editButton;
@property (nonatomic) UIButton editCompleteButton;
@property (nonatomic) AWEIMPublicGroupManagerSectionHeaderViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (id)lable;
- (void)setLable:;
- (void)__addKVO;
- (void)reusableViewWillDisplayAtIndexPath:;
- (void)reusableViewDidEndDisplayWithIndexPath:;
- (id)editCompleteButton;
- (void)__removeKVO;
- (void)__handleEditButtonClicked:;
- (void)__refreshEditButtonUI;
- (void)setEditCompleteButton:;
- (void)setEditButton:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (id)editButton;
- (void).cxx_destruct;
+ (id)identifier;
@end
