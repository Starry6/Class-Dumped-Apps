@interface CNContactSelectContainersAction : CNContactAction
@property (nonatomic) CNContactContainerPickerViewController containerPicker;
@property (nonatomic) CNUIContainerContext containerContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanupForDismissal;
- (void).cxx_destruct;
- (id)containerContext;
- (BOOL)containerPicker:shouldAllowDeselectionOfContainerWithIdentifier:;
- (void)containerPicker:didFinishWithPickedContainers:;
- (void)setContainerContext:;
- (id)containerPicker;
- (void)setContainerPicker:;
- (void)performActionWithContainerContext:;
@end
