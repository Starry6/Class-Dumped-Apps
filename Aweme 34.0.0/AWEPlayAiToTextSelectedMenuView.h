@interface AWEPlayAiToTextSelectedMenuView : UIView
@property (nonatomic) <AWEPlayAiToTextSelectedMenuViewDelegate> delagate;
@property (nonatomic) NSMutableArray buttonArray;
- (void)setButtonArray:;
- (id)buttonArray;
- (void)playBtnDidClick;
- (void)copyBtnDidClick;
- (void)searchBtnDidClick;
- (void)repostBtnDidClick;
- (id)init;
- (id)delagate;
- (void)setDelagate:;
- (void).cxx_destruct;
- (void)setUpUI;
@end
