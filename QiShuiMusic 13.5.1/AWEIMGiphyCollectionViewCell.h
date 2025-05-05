@interface AWEIMGiphyCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel emotionLabel;
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) IESIMSaaSEmoticonModel emoticonModel;
@property (nonatomic) IESIMSaaSEmoticonThemeModel emoticonThemeModel;
@property (nonatomic) BOOL isEmptyCell;
- (void)setIsEmptyCell:;
- (void)configWithModel:;
- (id)emoticonImageView;
- (id)emoticonModel;
- (id)emoticonThemeModel;
- (id)emotionLabel;
- (BOOL)isEmptyCell;
- (void)p_resetStatus;
- (void)p_setupUI;
- (void)setEmoticonImageView:;
- (void)setEmoticonModel:;
- (void)setEmoticonThemeModel:;
- (void)setEmotionLabel:;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
@end
