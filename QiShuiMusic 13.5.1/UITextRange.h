@interface UITextRange : NSObject
@property (nonatomic) BOOL isCaret;
@property (nonatomic) BOOL isRanged;
@property (nonatomic) UITextRangeImpl isImpl;
@property (nonatomic) <NSObject> _attachmentRange;
@property (nonatomic) BOOL empty;
@property (nonatomic) UITextPosition start;
@property (nonatomic) UITextPosition end;
- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (void).cxx_destruct;
- (id)_attachmentRange;
- (void)_setAttachmentRange:;
- (BOOL)_isCaret;
- (BOOL)_isRanged;
- (id)_isImpl;
- (id)_asNSRangeRelativeToDocument:;
- (id)_asNSRangeRelativeToDocument:relativeToCurrentLine:;
@end
