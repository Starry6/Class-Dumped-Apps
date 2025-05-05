@interface AWEIMEmoticonCollectionViewCell : UICollectionViewCell
@property (nonatomic) q imageScale;
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) IESIMSaaSEmoticonModel emoticonModel;
@property (nonatomic) IESIMSaaSEmoticonThemeModel emoticonThemeModel;
@property (nonatomic) BOOL isDeleteCell;
@property (nonatomic) BOOL isEmptyCell;
- (void)setIsEmptyCell:;
- (id)emoticonImageView;
- (id)emoticonModel;
- (id)emoticonThemeModel;
- (BOOL)isDeleteCell;
- (BOOL)isEmptyCell;
- (void)setEmoticonImageView:;
- (void)setEmoticonModel:;
- (void)setEmoticonThemeModel:;
- (void)setIsDeleteCell:;
- (void)setImageScale:;
- (void)resetStatus;
- (long long)imageScale;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
@end
