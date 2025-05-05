@interface IESLiveDanmakuBusinessView : IESLiveDanmakuBaseView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) IESLiveImageView logoImageView;
@property (nonatomic) IESLiveImageView tailImageView;
@property (nonatomic) double cacheDanmukuWidth;
- (void)updateWithNode:;
- (double)cacheDanmukuWidth;
- (void)setCacheDanmukuWidth:;
- (void)trackDanmakuShow;
- (void)updateSubviewsConstraints;
- (id)backgroundView;
- (id)init;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setupSubviews;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)tailImageView;
- (void)setTailImageView:;
- (id)logoImageView;
- (void)setLogoImageView:;
@end
