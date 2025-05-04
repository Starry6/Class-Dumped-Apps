@interface AWECoverChooseBottomTabTitleView : UIView
@property (nonatomic) AWECoverChooseBottomTabItem titleItem;
@property (nonatomic) AWECoverChooseBottomTabItem styleItem;
@property (nonatomic) AWECoverChooseActionButton resetButton;
@property (nonatomic) <AWECoverChooseBottomTabTitleViewDelegate> delegate;
@property (nonatomic) q selectedType;
- (void)resetAction;
- (void)titleAction;
- (id)styleItem;
- (void)styleAction;
- (id)createButtonWithImage:title:;
- (void)selectType:;
- (void)setResetButtonHidden:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)selectedType;
- (id)resetButton;
- (id)titleItem;
- (void)p_init;
@end
