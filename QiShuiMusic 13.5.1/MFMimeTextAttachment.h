@interface MFMimeTextAttachment : MFMessageTextAttachment
- (void)download;
- (unsigned int)approximateSize;
- (BOOL)hasBeenDownloaded;
- (id)_displayedMimePart;
- (id)initWithMimePart:;
@end
