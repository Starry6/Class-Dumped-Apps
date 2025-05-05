@interface MKEmptyTextAttachment : NSTextAttachment
- (id)initWithWidth:;
- (id)imageForBounds:textContainer:characterIndex:;
- (id)attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:;
@end
