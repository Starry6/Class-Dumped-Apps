@interface AWETeenCollectionViewSlideMoreFooter : UICollectionReusableView
@property (nonatomic) UIImageView footerIcon;
@property (nonatomic) UILabel footerLabel;
- (void)p_setupUI;
- (id)footerIcon;
- (void)setFooterIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setFooterLabel:;
- (id)footerLabel;
+ (double)footerWidth;
+ (double)leftPadding;
@end
