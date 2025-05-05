@interface UITextReplacementGenerator : NSObject
@property (nonatomic) UITextRange replacementRange;
@property (nonatomic) NSString stringToReplace;
- (void).cxx_destruct;
- (id)replacements;
- (BOOL)shouldAllowString:intoReplacements:;
- (id)replacementWithText:;
- (void)addPlaceholderForEmptyReplacements:;
- (BOOL)isStringToReplaceMisspelled;
- (id)replacementRange;
- (void)setReplacementRange:;
- (id)stringToReplace;
- (void)setStringToReplace:;
@end
