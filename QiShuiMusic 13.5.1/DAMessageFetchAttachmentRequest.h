@interface DAMessageFetchAttachmentRequest : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString attachmentName;
- (id)messageID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setMessageID:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAttachmentName:andMessageServerID:;
- (id)attachmentName;
- (void)setAttachmentName:;
@end
