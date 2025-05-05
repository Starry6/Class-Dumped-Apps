@interface DanceDefaultUIFieldEditor : NSObject
@property (nonatomic) {_NSRange=QQ} selectionRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAttributedText:andSetCaretSelectionAfterText:;
- (id)selectionRange;
- (void)setSelection:;
- (void)setAttributedMarkedText:selectedRange:;
@end
