@interface TISmartInsertDeleteController : NSObject
@property (nonatomic) TITextInputTraits textInputTraits;
@property (nonatomic) BOOL enabled;
- (id)textInputTraits;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)smartInsertForDocumentState:stringToInsert:outBeforeString:outAfterString:;
- (void)smartDeleteForDocumentState:outBeforeLength:outAfterLength:;
- (id)initWithTextInputTraits:;
- (unsigned long long)_numberOfCharactersInSet:atBeginningOfString:;
- (unsigned long long)_numberOfCharactersInSet:atEndOfString:;
@end
