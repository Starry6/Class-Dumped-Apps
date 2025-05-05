@interface CNContactContainerPickerCell : UICollectionViewListCell
@property (nonatomic) BOOL allowsDeselection;
- (id)init;
- (void)updateConfigurationUsingState:;
- (BOOL)allowsDeselection;
- (void)setAllowsDeselection:;
@end
