@interface AWECompanyUploadImageCell : UICollectionViewCell
@property (nonatomic) UIView uploadContentView;
@property (nonatomic) UIView imageContentView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UILabel uploadTextLabel;
@property (nonatomic) q maxUploadImageCount;
- (void)p_setupUploadContentView;
- (void)p_setupImageContentView;
- (long long)maxUploadImageCount;
- (id)uploadTextLabel;
- (void)setUploadContentView:;
- (id)uploadContentView;
- (void)setUploadTextLabel:;
- (void)updateImage:forRow:;
- (void)updateUploadStyleWithCount:;
- (void)setMaxUploadImageCount:;
- (void)setDeleteButton:;
- (id)initWithFrame:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)imageContentView;
- (void)setImageContentView:;
@end
