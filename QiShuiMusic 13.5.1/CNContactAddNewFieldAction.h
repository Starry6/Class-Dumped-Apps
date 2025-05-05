@interface CNContactAddNewFieldAction : CNContactAction
@property (nonatomic) NSArray prohibitedPropertyKeys;
@property (nonatomic) <CNContactGroupPickerDelegate> groupPickerDelegate;
- (void).cxx_destruct;
- (id)prohibitedPropertyKeys;
- (void)setProhibitedPropertyKeys:;
- (void)performActionWithSender:;
- (id)groupPickerDelegate;
- (void)setGroupPickerDelegate:;
@end
