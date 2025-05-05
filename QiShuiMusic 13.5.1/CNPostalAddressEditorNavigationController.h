@interface CNPostalAddressEditorNavigationController : UINavigationController
@property (nonatomic) <CNPostalAddressEditorDelegate> addressEditorDelegate;
- (void)setTitle:;
- (void).cxx_destruct;
- (id)initWithContact:propertyKey:editNames:;
- (id)initWithPropertyKey:label:;
- (id)initWithFirstName:lastName:addressDictionary:label:;
- (void)doneWithContact:propertyKey:;
- (id)addressEditorDelegate;
- (void)setAddressEditorDelegate:;
@end
