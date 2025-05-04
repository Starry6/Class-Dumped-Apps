@interface AWEIMCouponCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMCouponCardView cardView;
@property (nonatomic) <AWEIMCouponCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (void)__setupUI;
- (void)couponCardView:clickedWithViewModel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)cardView;
- (void)setCardView:;
+ (id)identifier;
@end
