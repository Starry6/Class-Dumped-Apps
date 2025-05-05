@interface QLGeneratedPreviewParts : QLPreviewParts
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary attachments;
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSMutableDictionary idToURL;
- (id)data;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setAttachments:;
- (void)setData:;
- (void)setMimeType:;
- (id)attachments;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)URLRequestForContentID:;
- (void)computePreview:;
- (id)initWithData:encoding:mimeType:attachments:;
- (void)_processAttachment:withID:;
- (id)newAttachmentURLWithID:mimeType:encoding:;
- (void)_registerURL:forContentID:;
- (id)idToURL;
- (void)setIdToURL:;
@end
