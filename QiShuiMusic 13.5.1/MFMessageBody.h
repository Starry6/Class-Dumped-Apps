@interface MFMessageBody : NSObject
@property (nonatomic) BOOL isEncrypted;
- (BOOL)isEncrypted;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (id)rawData;
- (id)attachments;
- (id)htmlContent;
- (id)attachmentURLs;
- (id)textHtmlPart;
- (id)contentToOffset:resultOffset:asHTML:isComplete:;
- (unsigned int)numberOfAttachmentsSigned:encrypted:;
- (BOOL)isHTML;
- (id)htmlContentToOffset:resultOffset:;
- (id)contentToOffset:resultOffset:asHTML:;
- (BOOL)isRich;
@end
