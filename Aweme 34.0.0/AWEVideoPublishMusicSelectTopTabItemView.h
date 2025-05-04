@interface AWEVideoPublishMusicSelectTopTabItemView : UIView
@property (nonatomic) UIButton maskButton;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UIView underLineView;
@property (nonatomic) AWEVideoPublishMusicSelectTopTabItemData itemData;
@property (nonatomic) @? clickBlock;
- (id)titleLable;
- (void)setTitleLable:;
- (void)buttonClicked:;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)setMaskButton:;
- (id)maskButton;
- (void)p_setupAccessibility;
- (id)initWithItemData:;
- (id)underLineView;
- (void)setUnderLineView:;
- (void)refresh;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (void)setupViews;
- (id)itemData;
- (void)setItemData:;
@end
