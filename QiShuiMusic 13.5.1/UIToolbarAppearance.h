@interface UIToolbarAppearance : UIBarAppearance
@property (nonatomic) UIBarButtonItemAppearance buttonAppearance;
@property (nonatomic) UIBarButtonItemAppearance doneButtonAppearance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_completeInit;
- (void)_barButtonItemDataChanged:;
- (void)_decodeFromCoder:;
- (void)_describeInto:;
- (void)_barButtonItemAppearanceChangedItemData:toItemData:fromItemData:;
- (id)doneButtonAppearance;
- (BOOL)_checkEqualTo:;
- (unsigned long long)_hashInto:;
- (void)_copyFromAppearance:;
- (void)setDoneButtonAppearance:;
- (id)_doneButtonAppearanceData;
- (void)_setupDefaults;
- (void)setButtonAppearance:;
- (id)_plainButtonAppearance;
- (void)encodeWithCoder:;
- (id)_plainButtonAppearanceData;
- (id)_doneButtonAppearance;
- (void).cxx_destruct;
- (id)buttonAppearance;
+ (BOOL)supportsSecureCoding;
@end
