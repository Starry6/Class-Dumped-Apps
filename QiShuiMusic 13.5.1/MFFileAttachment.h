@interface MFFileAttachment : NSObject
@property (nonatomic) NSString attachmentName;
@property (nonatomic) NSURL attachmentContentIDURL;
@property (nonatomic) NSInteger attachmentType;
- (int)attachmentType;
- (void)setAttachmentType:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)attachmentName;
- (void)setAttachmentName:;
- (id)attachmentContentIDURL;
- (void)setAttachmentContentIDURL:;
@end
