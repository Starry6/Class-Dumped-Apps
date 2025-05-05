@interface MFCenteredTextAttachment : NSTextAttachment
@property (nonatomic) double height;
- (double)height;
- (void)setHeight:;
- (id)attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:;
@end
