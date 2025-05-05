@interface PKTextInputWindowFirstResponder : NSObject
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL pencilTextInputSource;
@property (nonatomic) q textInputSource;
@property (nonatomic) BOOL editableTextInput;
@property (nonatomic) BOOL editableTextInputWithPencilTextInputSource;
@property (nonatomic) UITextInputAssistantItem inputAssistantItem;
@property (nonatomic) BOOL disableInputAssistant;
@property (nonatomic) BOOL notesHandwritingResponder;
- (id)inputAssistantItem;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (id)initWithIsVisible:isEditableTextInput:textInputSource:inputAssistantItem:;
- (BOOL)isPencilTextInputSource;
- (BOOL)isEditableTextInputWithPencilTextInputSource;
- (long long)textInputSource;
- (BOOL)isEditableTextInput;
- (BOOL)disableInputAssistant;
- (void)setDisableInputAssistant:;
- (BOOL)isNotesHandwritingResponder;
- (void)setNotesHandwritingResponder:;
@end
