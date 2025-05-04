@interface AWEIMMixPhotoAIModelInfoView : UIView
@property (nonatomic) UIImageView leadingImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView trailingImageView;
@property (nonatomic) AWEIMMixPhotoAIModelInfoModel vm;
- (void)renderViewModel:;
- (void)__addConstraints;
- (id)vm;
- (void)setVm:;
- (void)__initSubViews;
- (id)init;
- (void)setTitleLabel:;
- (void)onTap;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)leadingImageView;
- (id)trailingImageView;
- (void)setLeadingImageView:;
- (void)setTrailingImageView:;
@end
