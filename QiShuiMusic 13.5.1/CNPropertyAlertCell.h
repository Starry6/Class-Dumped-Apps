@interface CNPropertyAlertCell : CNPropertySimpleCell
@property (nonatomic) CNPropertyGroupAlertItem alertItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (void)setCardGroupItem:;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)picker:didPickItem:;
- (void)pickerDidCancel:;
- (id)alertItem;
- (id)alertGroup;
- (BOOL)allowsCellSelection;
+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;
@end
