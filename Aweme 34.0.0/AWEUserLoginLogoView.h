@interface AWEUserLoginLogoView : UIView
@property (nonatomic) UIImageView logoView;
@property (nonatomic) UILabel fullScreenLogoLabel;
@property (nonatomic) UILabel halfScreenLogoLabel;
@property (nonatomic) UIView halfScreenVerticalLine;
- (void)setupHalfScreenLogoView;
- (void)setupFullScreenLogoView;
- (id)halfScreenVerticalLine;
- (id)halfScreenLogoLabel;
- (id)fullScreenLogoLabel;
- (void)setFullScreenLogoLabel:;
- (void)setHalfScreenLogoLabel:;
- (void)setHalfScreenVerticalLine:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)logoView;
- (void)setLogoView:;
@end
