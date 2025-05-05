@interface MFAttachmentRaw : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString contentID;
- (id)fileName;
- (id)data;
- (id)initWithCoder:;
- (id)mimeType;
- (id)contentID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setFileName:;
- (void)setMimeType:;
- (void)setContentID:;
+ (BOOL)supportsSecureCoding;
+ (id)attachmentData:fileName:mimeType:;
+ (id)attachmentData:fileName:mimeType:contentID:;
@end
