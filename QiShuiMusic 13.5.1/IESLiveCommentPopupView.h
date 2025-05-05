@interface IESLiveCommentPopupView : UIView
@property (nonatomic) NSMutableArray popupViewHeights;
@property (nonatomic) NSMutableArray curPopViews;
@property (nonatomic) @? popupBack;
@property (nonatomic) @? heightChange;
@property (nonatomic) double currentContentViewHeight;
@property (nonatomic) q currentLevel;
- (void)setCurPopViews:;
- (id)curPopViews;
- (double)currentContentViewHeight;
- (id)heightChange;
- (void)panelWillHide;
- (id)popupBack;
- (id)popupViewHeights;
- (void)setCurrentContentViewHeight:;
- (void)setHeightChange:;
- (void)setPopupBack:;
- (void)setPopupViewHeights:;
- (void)showContentView:preferredHeight:;
- (id)initWithFrame:;
- (long long)currentLevel;
- (void).cxx_destruct;
- (void)setCurrentLevel:;
@end
