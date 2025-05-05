@interface MFMessageTextAttachment : NSObject
@property (nonatomic) MFMessageFileWrapper fileWrapper;
- (void)download;
- (id)init;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)approximateSize;
- (id)fileWrapper;
- (void)setFileWrapper:;
- (id)cachedValueForKey:;
- (void)setCachedValue:forKey:;
- (BOOL)hasBeenDownloaded;
- (id)fileWrapperForcingDownload:;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingNameForData:mimeType:;
- (id)mimePart;
- (id)initWithWrapper:;
- (BOOL)needsRedownload;
- (void)inlineDisplayData:mimeType:;
- (void)setMimePart:;
- (id)textEncodingGuess;
+ (unsigned long long)precedenceLevel;
@end
