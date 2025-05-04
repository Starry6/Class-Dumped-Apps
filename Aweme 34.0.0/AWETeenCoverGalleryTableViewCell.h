@interface AWETeenCoverGalleryTableViewCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEAnimatedButton settingButton;
@property (nonatomic) q currentIndex;
@property (nonatomic) @? cellTapBlock;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setSettingButton:;
- (id)settingButton;
- (id)cellTapBlock;
- (void)settingButtonTap:;
- (void)setCoverImage:selected:index:;
- (void)setCellTapBlock:;
- (void)setCurrentIndex:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setupUI;
+ (double)cellHeight;
@end
