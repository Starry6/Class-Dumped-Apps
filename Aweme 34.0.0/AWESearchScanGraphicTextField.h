@interface AWESearchScanGraphicTextField : DUXBaseTextField
@property (nonatomic) NSString lastText;
@property (nonatomic) BOOL shouldDeleteBackward;
@property (nonatomic) @? deleteBackwardBlock;
@property (nonatomic) @? textFieldWillBecomeEmptyBlock;
@property (nonatomic) @? textFieldWillBecomeNotEmptyBlock;
@property (nonatomic) @? textFieldDidChangeBlock;
- (void)setLastText:;
- (id)lastText;
- (id)textFieldDidChangeBlock;
- (void)setTextFieldDidChangeBlock:;
- (id)deleteBackwardBlock;
- (void)setDeleteBackwardBlock:;
- (id)textFieldWillBecomeEmptyBlock;
- (void)setTextFieldWillBecomeEmptyBlock:;
- (id)textFieldWillBecomeNotEmptyBlock;
- (void)setTextFieldWillBecomeNotEmptyBlock:;
- (BOOL)shouldDeleteBackward;
- (void)setShouldDeleteBackward:;
- (void)identifyTextChangeWithOldText:andNewText:;
- (id)init;
- (void)dealloc;
- (void)setText:;
- (void)textDidChange:;
- (void).cxx_destruct;
- (void)deleteBackward;
@end
