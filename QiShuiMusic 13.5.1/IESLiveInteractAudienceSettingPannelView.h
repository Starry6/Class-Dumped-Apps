@interface IESLiveInteractAudienceSettingPannelView : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL disableBackbBtn;
@property (nonatomic) q itemType;
@property (nonatomic) NSArray items;
- (void)didClickBackBtn;
- (BOOL)disableBackbBtn;
- (id)buildSettingViewForItem:;
- (id)initWithFrame:disableBackBtn:;
- (void)renderItems:;
- (void)setDisableBackbBtn:;
- (void)setItemType:;
- (id)contentView;
- (void)setScrollView:;
- (id)items;
- (long long)itemType;
- (id)scrollView;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setContentView:;
@end
