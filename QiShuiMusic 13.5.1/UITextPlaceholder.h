@interface UITextPlaceholder : NSObject
@property (nonatomic) NSArray rects;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} caretRectBeforeInsertion;
@property (nonatomic) _UITextPlaceholderAttachment attachment;
- (id)init;
- (void).cxx_destruct;
- (void)setRects:;
- (id)rects;
- (id)attachment;
- (void)setAttachment:;
- (id)caretRectBeforeInsertion;
- (void)setCaretRectBeforeInsertion:;
@end
