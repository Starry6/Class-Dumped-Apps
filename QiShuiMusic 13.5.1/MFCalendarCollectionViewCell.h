@interface MFCalendarCollectionViewCell : UICollectionViewListCell
@property (nonatomic) UIDatePicker datePicker;
@property (nonatomic) <MFCalendarCollectionViewCellDelegate> delegate;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)datePicker;
- (void)setDatePicker:;
- (void)datePickerChanged:;
+ (id)reusableIdentifier;
@end
