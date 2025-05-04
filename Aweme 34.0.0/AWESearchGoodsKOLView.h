@interface AWESearchGoodsKOLView : UIView
@property (nonatomic) AWESearchMerchandiseKOLInfo KOLInfo;
@property (nonatomic) UIView bg;
@property (nonatomic) UIImageView KOLAvatar;
@property (nonatomic) UILabel KOLName;
@property (nonatomic) UIImageView arrowIcon;
- (id)KOLInfo;
- (void)setKOLInfo:;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (id)KOLAvatar;
- (void)setKOLAvatar:;
- (void)setBg:;
- (id)KOLName;
- (void)setKOLName:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bg;
+ (double)height;
@end
