@interface PDFTextRange : UITextRange
- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (void).cxx_destruct;
- (id)description;
- (id)initFromPos:toPos:;
+ (id)textRangeFromSelection:;
@end
