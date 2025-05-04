@interface AWEAlbumSelectTemplateCollectionViewCell : UICollectionViewCell
@property (nonatomic) <ACCMVTemplateModelProtocol> templateModel;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) double imageViewHeight;
- (void)p_setupUI;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)descLabel;
- (void)setDescLabel:;
- (double)imageViewHeight;
- (void)setImageViewHeight:;
- (void)updateWithTemplateModel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isAccessibilityElement;
- (void)setTemplateModel:;
- (id)templateModel;
+ (id)descLabelFont;
+ (double)cellHeightForModel:withWidth:;
+ (double)p_coverImageRatioWithTemplateModel:;
+ (id)titleLabelFont;
+ (id)cellIdentifier;
@end
