@interface CNLabelPickerController : CNPickerController
@property (nonatomic) NSMutableArray labelsToDeleteOnCommit;
@property (nonatomic) CNPropertyGroupItem item;
- (id)item;
- (void).cxx_destruct;
- (id)titleForPickerItem:;
- (id)initForPropertyItem:;
- (void)removeCustomItem:;
- (void)pickedItem:;
- (id)labelsToDeleteOnCommit;
- (void)setLabelsToDeleteOnCommit:;
@end
