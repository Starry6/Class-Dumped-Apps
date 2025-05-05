@interface AWEIMCustomGiphyCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel searchLabel;
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) IESIMSaaSEmoticonModel emoticonModel;
@property (nonatomic) IESIMSaaSEmoticonThemeModel emoticonThemeModel;
@property (nonatomic) q containerViewType;
@property (nonatomic) BOOL isEmptyCell;
- (void)setIsEmptyCell:;
- (void)setSearchLabel:;
- (void)configWithEmoticonModel:isFirst:themeStyle:;
- (long long)containerViewType;
- (id)emoticonImageView;
- (id)emoticonModel;
- (id)emoticonThemeModel;
- (BOOL)isEmptyCell;
- (void)p_resetStatus;
- (void)p_setupUI;
- (void)setContainerViewType:;
- (void)setEmoticonImageView:;
- (void)setEmoticonModel:;
- (void)setEmoticonThemeModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)searchLabel;
+ (id)identifier;
@end
