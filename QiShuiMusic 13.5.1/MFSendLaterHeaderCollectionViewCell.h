@interface MFSendLaterHeaderCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIDatePicker datePicker;
@property (nonatomic) q currentVisibleComponent;
@property (nonatomic) <MFSendLaterHeaderCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)datePicker;
- (void)setDatePicker:;
- (void)_datePicker:didSelectComponent:;
- (void)updateActiveComponent:;
- (void)updateWithDate:timeZone:;
- (long long)currentVisibleComponent;
- (void)setCurrentVisibleComponent:;
+ (id)reusableIdentifier;
@end
