@interface AWEIMMixPhotoAIStateInfoView : UIView
@property (nonatomic) UIImageView topImageView;
@property (nonatomic) UIImageView leadingImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEIMMixPhotoAITaskStateInfoModel vm;
- (id)topImageView;
- (void)setTopImageView:;
- (void)renderViewModel:;
- (void)__addConstraints;
- (id)vm;
- (void)setVm:;
- (void)__initSubViews;
- (id)init;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)leadingImageView;
- (void)setLeadingImageView:;
@end
