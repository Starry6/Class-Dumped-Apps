@interface AWETeenLongPressPanelSegmentView : UIView
@property (nonatomic) NSArray items;
@property (nonatomic) UIView btnBackView;
@property (nonatomic) UIView animationView;
@property (nonatomic) UIButton seletedBtn;
@property (nonatomic) q selectedIndex;
@property (nonatomic) <AWETeenLongPressPanelSegmentViewDelegate> delegate;
- (void)setDefaultSelectIndex:;
- (void)setBtnBackView:;
- (void)btnDidClick:;
- (id)animationViewSize;
- (void)btnClick:isUserAction:;
- (id)btnBackView;
- (id)seletedBtn;
- (void)setSeletedBtn:;
- (id)initWithItems:;
- (void)setSelectedIndex:;
- (id)items;
- (id)delegate;
- (void)setItems:;
- (void)setUp;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)animationView;
- (void)setAnimationView:;
- (id)initWithItems:delegate:;
- (double)titleLabelFontSize;
@end
