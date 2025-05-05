@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (void)contactPicker:didSelectContact:;
- (void)contactPickerDidCancel:;
- (void)performAccessoryAction;
@end
