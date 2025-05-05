@interface IESECContactPickViewController : CNContactPickerViewController
@property (nonatomic) @? completeHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completeHandler;
- (id)getNameWithContact:;
- (void)setCompleteHandler:;
- (void).cxx_destruct;
- (void)contactPicker:didSelectContactProperty:;
- (void)contactPickerDidCancel:;
+ (void)openContactPickerWithcompleteHandle:;
@end
