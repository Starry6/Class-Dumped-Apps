@interface MFTimeWheelCollectionViewCell : UICollectionViewListCell
@property (nonatomic) UIDatePicker timePicker;
@property (nonatomic) <MFTimeWheelCollectionViewCellDelegate> delegate;
@property (nonatomic) NSDate minimumDate;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)minimumDate;
- (void)setMinimumDate:;
- (void)datePickerChanged:;
- (id)timePicker;
- (void)setTimePicker:;
+ (id)reusableIdentifier;
@end
