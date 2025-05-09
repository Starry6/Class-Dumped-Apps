@interface UIKBTextEditingTraits : NSObject
@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isItalicized;
@property (nonatomic) BOOL isUnderlined;
@property (nonatomic) BOOL canToggleBoldface;
@property (nonatomic) BOOL canToggleItalics;
@property (nonatomic) BOOL canToggleUnderline;
@property (nonatomic) BOOL supportStyling;
@property (nonatomic) BOOL canCut;
@property (nonatomic) BOOL canCopy;
@property (nonatomic) BOOL canPaste;
@property (nonatomic) BOOL canMoveCursorLeft;
@property (nonatomic) BOOL canMoveCursorRight;
@property (nonatomic) UIResponder firstResponder;
- (BOOL)canPaste;
- (BOOL)canCopy;
- (BOOL)isUnderlined;
- (BOOL)isItalicized;
- (BOOL)canToggleItalics;
- (BOOL)canToggleBoldface;
- (BOOL)supportStyling;
- (BOOL)canMoveCursorLeft;
- (void).cxx_destruct;
- (BOOL)isBold;
- (BOOL)canCut;
- (BOOL)canMoveCursorRight;
- (id)initWithResponder:canRespondBlock:keyMaskFlags:sender:;
- (void)setCanCut:;
- (BOOL)canToggleUnderline;
- (id)firstResponder;
+ (id)traitsForEditingInteractionWithFirstResponder:canRespondBlock:keyMaskFlags:;
+ (id)traitsWithResponder:keyMaskFlags:;
@end
