@interface AWESearchFilmTVTagView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) CAGradientLayer tagBackgroundLayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)configWithSourceModel:;
- (id)tagBackgroundLayer;
- (void)setTagBackgroundLayer:;
- (void)setupControl;
- (void)configWithTag:lightTag:;
- (void)configTagViewWithSourceModel:;
- (void)configStatusLabel:;
- (void)configWithTagName:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
@end
