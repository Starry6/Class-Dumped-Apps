@interface AWEMusicSingleTabTopView : UIView
@property (nonatomic) AWEMusicSingleTabTopTitleView titleArea;
@property (nonatomic) UIView seperateView;
@property (nonatomic) NSString tailText;
- (void)updateTextColor:;
- (id)seperateView;
- (void)setSeperateView:;
- (void)buildUI;
- (id)tailText;
- (void)setTailText:;
- (void)setTitleArea:;
- (id)titleArea;
- (id)init;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateTitle:;
@end
