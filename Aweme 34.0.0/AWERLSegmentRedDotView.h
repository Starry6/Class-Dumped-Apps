@interface AWERLSegmentRedDotView : UIView
@property (nonatomic) UIView redDotBgView;
@property (nonatomic) UILabel contentLabel;
- (void)configWithRedDotStyle:contentString:;
- (void)refreshRegularStyleRedDot;
- (void)refreshTextStyleRedDot:;
- (id)redDotBgView;
- (void)setRedDotBgView:;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
@end
