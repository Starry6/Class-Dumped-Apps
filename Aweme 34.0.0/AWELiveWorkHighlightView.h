@interface AWELiveWorkHighlightView : UIView
@property (nonatomic) UIView highlightView;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UILabel leftTextView;
@property (nonatomic) UILabel rightTextView;
@property (nonatomic) UIImageView rightButton;
@property (nonatomic) LiveTabResponse_ReplayItem playBackData;
- (id)leftIconView;
- (void)setLeftIconView:;
- (void)p_gestureAction:;
- (void)setupDataWithModel:;
- (id)leftTextView;
- (id)rightTextView;
- (id)playBackData;
- (long long)getFirstHighlight:;
- (void)setPlayBackData:;
- (void)setLeftTextView:;
- (void)setRightTextView:;
- (void)setHighlightView:;
- (void)setRightButton:;
- (id)initWithModel:;
- (id)highlightView;
- (void)updateWithConfig:;
- (id)initWithFrame:;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setupUI;
@end
