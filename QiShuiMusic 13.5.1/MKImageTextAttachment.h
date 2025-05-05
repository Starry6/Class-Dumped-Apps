@interface MKImageTextAttachment : NSTextAttachment
@property (nonatomic) double verticalOffset;
@property (nonatomic) double maxHeight;
- (void)setMaxHeight:;
- (double)maxHeight;
- (id)attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:;
- (double)verticalOffset;
- (id)initWithImage:verticalOffset:;
- (void)setVerticalOffset:;
@end
