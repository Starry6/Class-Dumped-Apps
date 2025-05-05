@interface MFTimeHeaderCollectionViewCell : UICollectionViewListCell
@property (nonatomic) <MFTimeHeaderCollectionViewCellDelegate> delegate;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)showTimeWheelCell:;
- (void)updateSecondaryTextWithTime:;
+ (id)reusableIdentifier;
@end
