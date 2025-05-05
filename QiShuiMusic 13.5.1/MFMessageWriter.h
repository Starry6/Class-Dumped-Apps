@interface MFMessageWriter : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) NSDictionary compositionSpecification;
@property (nonatomic) BOOL shouldWriteAttachmentPlaceholders;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)compositionSpecification;
- (id)initWithCompositionSpecification:;
- (void)appendDataForMimePart:toData:withPartData:;
- (id)createMessageWithString:headers:;
- (id)createMessageWithPlainTextDocumentsAndAttachments:headers:;
- (id)createMessageWithHtmlString:plainTextAlternative:otherHtmlStringsAndAttachments:headers:;
- (id)createMessageWithHTMLStringAndMIMECharset:plainTextAlternative:otherHtmlStringsAndAttachments:headers:;
- (id)createMessageWithHtmlString:attachments:headers:;
- (void)appendHeadersForMimePart:toHeaders:;
- (id)newDataForMimePart:withPartData:;
- (BOOL)allows8BitMimeParts;
- (void)setAllows8BitMimeParts:;
- (BOOL)allowsBinaryMimeParts;
- (void)setAllowsBinaryMimeParts:;
- (BOOL)allowsQuotedPrintable;
- (void)setAllowsQuotedPrintable:;
- (void)setWriteSizeDispositionParameter:;
- (void)setMessageClassToInstantiate:;
- (BOOL)shouldWriteAttachmentPlaceholders;
- (void)setShouldWriteAttachmentPlaceholders:;
@end
