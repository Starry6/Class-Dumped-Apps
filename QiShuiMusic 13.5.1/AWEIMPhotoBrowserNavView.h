@interface AWEIMPhotoBrowserNavView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) AWEIMSelectableStatusView selectableStatusView;
@property (nonatomic) UIView touchView;
@property (nonatomic) @? backBlock;
@property (nonatomic) @? selectAreaTappedBlock;
- (id)backBlock;
- (id)selectAreaTappedBlock;
- (id)selectableStatusView;
- (void)setBackBlock:;
- (void)setSelect:number:animated:;
- (void)setSelectAreaTappedBlock:;
- (void)setSelectableStatusView:;
- (void)setTouchView:;
- (void)tapGR:;
- (id)touchView;
- (id)backButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackButton:;
- (void)backButtonPressed:;
@end
