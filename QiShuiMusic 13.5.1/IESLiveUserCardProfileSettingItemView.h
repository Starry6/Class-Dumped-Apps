@interface IESLiveUserCardProfileSettingItemView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isManualSelect;
@property (nonatomic) @? selectedBlock;
@property (nonatomic) BOOL isSelected;
- (id)initWithTitle:desc:isSelected:;
- (BOOL)isManualSelect;
- (void)selectButtonDidClicked;
- (id)selectedBlock;
- (void)setIsManualSelect:;
- (void)setSelectedBlock:;
- (void)setTitleLabel:;
- (id)backButton;
- (void)setTitle:;
- (BOOL)isSelected;
- (id)title;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)titleLabel;
- (void)setBackButton:;
- (void)setupViews;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
