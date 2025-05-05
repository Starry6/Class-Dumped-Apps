@interface SFStartPageCustomizationCell : UICollectionViewListCell
@property (nonatomic) <SFStartPageCustomizationCellDelegate> delegate;
@property (nonatomic) BOOL on;
- (BOOL)isOn;
- (void)setDelegate:;
- (void)setOn:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAccessories:;
- (void)valueDidChange:;
@end
