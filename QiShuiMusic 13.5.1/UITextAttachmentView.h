@interface UITextAttachmentView : UIView
@property (nonatomic) NSTextAttachment attachment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentView:;
- (id)contentView;
- (void).cxx_destruct;
- (id)attachment;
- (void)setAttachment:;
- (void)drawWithFrame:inView:characterIndex:layoutManager:;
- (id)cellSize;
- (id)cellBaselineOffset;
- (id)cellFrameForTextContainer:proposedLineFragment:glyphPosition:characterIndex:;
- (void)drawWithFrame:inView:characterIndex:;
- (id)initWithTextAttachment:image:;
@end
