@interface AWENovelReaderAddTipCenterView : UIView
@property (nonatomic) UIImageView topBookView;
@property (nonatomic) UILabel bookLabel;
@property (nonatomic) UILabel centerLabel;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UIView bottomBookView;
@property (nonatomic) UIView oneLineView;
@property (nonatomic) UIView twoLineView;
@property (nonatomic) UIView threeLineView;
- (void)setTopBookView:;
- (id)topBookView;
- (void)setBookLabel:;
- (id)bookLabel;
- (void)setBottomBookView:;
- (id)bottomBookView;
- (void)setOneLineView:;
- (id)oneLineView;
- (void)setTwoLineView:;
- (id)twoLineView;
- (void)setThreeLineView:;
- (id)threeLineView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)progressLabel;
- (void)setProgressLabel:;
- (void)setCenterLabel:;
- (id)centerLabel;
@end
