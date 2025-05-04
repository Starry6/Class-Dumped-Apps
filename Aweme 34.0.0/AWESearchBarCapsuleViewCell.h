@interface AWESearchBarCapsuleViewCell : UICollectionViewCell
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UITapGestureRecognizer tap;
- (void)updateTextColor:;
- (void)resetDefaultBkgColorAndCornerRadius;
- (void)updateIconName:;
- (void)setLabel:;
- (id)icon;
- (id)initWithFrame:;
- (id)label;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)tap;
- (void)setTap:;
- (void)updateWithText:;
+ (double)itemWidthWithText:;
@end
