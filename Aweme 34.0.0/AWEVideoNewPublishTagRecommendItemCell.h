@interface AWEVideoNewPublishTagRecommendItemCell : UICollectionViewCell
@property (nonatomic) AWEPublishTagRecommendStyleInfo styleInfo;
@property (nonatomic) Q tagStyle;
@property (nonatomic) AWEVideoInputSuggestionModel model;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView tagImageView;
- (void)configWithModel:;
- (id)tagImageView;
- (void)setHashTagType:;
- (void)setTagImageView:;
- (unsigned long long)tagStyle;
- (void)setTagStyle:;
- (void)setModel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setNameLabel:;
- (void)setStyleInfo:;
- (id)styleInfo;
@end
