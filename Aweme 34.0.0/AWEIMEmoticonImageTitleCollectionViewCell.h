@interface AWEIMEmoticonImageTitleCollectionViewCell : AWEIMEmoticonImageCollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView limitedImageView;
- (void)createComponent;
- (void)layoutComponent;
- (void)renderUIWithViewModel:;
- (id)limitedImageView;
- (void)setLimitedImageView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
