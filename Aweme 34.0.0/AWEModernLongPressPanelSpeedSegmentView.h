@interface AWEModernLongPressPanelSpeedSegmentView : AWELongPressPanelSegmentView
@property (nonatomic) NSArray items;
@property (nonatomic) UIView btnBackView;
@property (nonatomic) UIButton selectedBtn;
@property (nonatomic) q selectedIndex;
- (void)setDefaultSelectIndex:;
- (void)setBtnBackView:;
- (void)btnDidClick:;
- (void)btnClick:isUserAction:;
- (id)btnBackView;
- (id)selectedBtn;
- (void)setSelectedBtn:;
- (id)initWithItems:;
- (void)setSelectedIndex:;
- (id)items;
- (void)setItems:;
- (void)setUp;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (id)initWithItems:delegate:;
@end
