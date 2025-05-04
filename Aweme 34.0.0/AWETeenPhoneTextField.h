@interface AWETeenPhoneTextField : UITextField
@property (nonatomic) AWETeenPhoneLogic logicDelegate;
@property (nonatomic) AWETeenPhoneNumberFormatter formatter;
@property (nonatomic) @? textDidChangeBlock;
- (id)textDidChangeBlock;
- (void)setTextDidChangeBlock:;
- (id)phoneNumberWithoutPrefix;
- (void)logicInitialization;
- (id)logicDelegate;
- (void)setLogicDelegate:;
- (id)delegate;
- (id)formatter;
- (id)initWithFrame:;
- (id)phoneNumber;
- (void).cxx_destruct;
- (void)setFormattedText:;
- (void)setDelegate:;
- (id)initWithCoder:;
@end
