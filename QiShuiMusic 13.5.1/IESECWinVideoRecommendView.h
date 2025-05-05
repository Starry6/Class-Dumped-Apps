@interface IESECWinVideoRecommendView : UIView
@property (nonatomic) UIImageView windowIconView;
@property (nonatomic) UILabel recommendLabel;
- (id)recommendLabel;
- (void)setRecommendLabel:;
- (void)setWindowIconView:;
- (void)updateRecommendViewWithVideoObject:;
- (id)windowIconView;
- (id)init;
- (void).cxx_destruct;
- (void)setUpConstraints;
@end
