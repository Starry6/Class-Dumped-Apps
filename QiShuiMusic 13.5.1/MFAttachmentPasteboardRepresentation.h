@interface MFAttachmentPasteboardRepresentation : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString name;
@property (nonatomic) NSString mimeType;
@property (nonatomic) BOOL valid;
- (void)setName:;
- (id)data;
- (id)initWithCoder:;
- (id)mimeType;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setData:;
- (id)name;
- (void)setMimeType:;
- (id)initWithAttachment:;
- (id)initWithMFAttachment:;
+ (BOOL)supportsSecureCoding;
@end
