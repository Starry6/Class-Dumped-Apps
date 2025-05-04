@interface AWEFollowGroupAddMemberView : UIView
@property (nonatomic) UIView iconBgView;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UIButton createButton;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) @? createBlock;
- (void)createButtonClick;
- (void)__setupView;
- (id)iconBgView;
- (id)createBlock;
- (void)setIconBgView:;
- (void)setCreateBlock:;
- (void)setGroupID:;
- (id)iconImage;
- (id)init;
- (id)groupID;
- (void)setIconImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)createButton;
- (void)setCreateButton:;
@end
