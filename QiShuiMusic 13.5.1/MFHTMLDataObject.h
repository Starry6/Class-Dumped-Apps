@interface MFHTMLDataObject : NSObject
@property (nonatomic) ECHTMLStringAndMIMECharset htmlString;
@property (nonatomic) NSArray otherHTMLStringsAndAttachments;
@property (nonatomic) MFPlainTextDocument plainTextAlternative;
@property (nonatomic) MFQuotedAttachmentsInfo quotedAttachmentsInfo;
- (void).cxx_destruct;
- (id)htmlString;
- (id)initWithHTMLString:otherHTMLStringsAndAttachments:plainTextAlternative:quotedAttachmentsInfo:;
- (id)otherHTMLStringsAndAttachments;
- (id)plainTextAlternative;
- (id)quotedAttachmentsInfo;
@end
