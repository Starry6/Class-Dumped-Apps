@interface AWENewVideoCoverPreviewRemindView : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView placeholderView;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)configLabel;
- (void)setPlaceholderView:;
- (id)placeholderView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
