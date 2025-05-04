@interface AWEDeliveryMoreViewCell : UICollectionViewCell
@property (nonatomic) AWEDeliveryMoreItem item;
@property (nonatomic) UIView bkgView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView remindView;
- (id)bkgView;
- (id)remindView;
- (void)hideRemindView;
- (void)setBkgView:;
- (void)setRemindView:;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
+ (id)identity;
@end
