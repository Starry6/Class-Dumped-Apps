@interface AWEFormattedTextField : UITextField
@property (nonatomic) AWEFormattedTextFieldDelegate textFieldDelegate;
@property (nonatomic) NSString formatString;
@property (nonatomic) NSCharacterSet allowedCharacterSet;
- (id)originText;
- (void)setAllowedCharacterSet:;
- (void)setFormatString:;
- (id)formatString;
- (id)delegate;
- (id)initWithFrame:;
- (void)commonInit;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTextFieldDelegate:;
- (id)textFieldDelegate;
- (id)allowedCharacterSet;
+ (id)originalStringWithFormat:inputString:;
+ (id)trimmedStringForString:allowedCharacterSet:;
+ (id)formattedStringWithFormat:inputString:;
+ (id)originalRangeWithFormat:formattedRange:;
+ (id)cursorRangeWithReplaceRange:stringLength:;
+ (id)cursorRangeWithFormat:originCursorRange:;
+ (void)selectTextForInput:atRange:;
@end
