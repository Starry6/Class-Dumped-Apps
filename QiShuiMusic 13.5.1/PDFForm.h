@interface PDFForm : NSObject
- (id)init;
- (void)dealloc;
- (void)setDocument:;
- (id)fieldNames;
- (id)document;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDocument:;
- (id)copyWithZone:;
- (void)setStringValue:forFieldNamed:postFormChangeNotification:;
- (id)stringValueForFieldNamed:;
- (id)defaultStringValueForFieldNamed:;
- (id)defaultDAStringRef;
- (void)addFormField:;
- (void)removeFormFieldWithFieldName:;
- (void)resetFormForFields:;
- (void)resetFormExcludingFields:;
- (void)_commonResetForm:inclusive:;
- (id)fieldNamed:;
- (void)addNeedsAppearanceToDictionaryRef:;
- (id)createDictionaryRef;
@end
