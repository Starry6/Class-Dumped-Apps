@interface EABluetoothAccessoryPicker : NSObject
@property (nonatomic) <EABluetoothAccessoryPickerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (void)show;
- (id)delegate;
- (id)initWithPredicate:;
- (void)devicePicker:didDismissWithResult:deviceAddress:;
- (void)dismissPicker;
+ (void)wakeSelectedBluetoothAccessories:;
@end
