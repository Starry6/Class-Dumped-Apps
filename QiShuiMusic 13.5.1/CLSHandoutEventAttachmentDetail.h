@interface CLSHandoutEventAttachmentDetail : CLSObject
@property (nonatomic) NSString attachmentID;
@property (nonatomic) NSInteger handoutAttachmentType;
@property (nonatomic) q contextType;
- (id)init;
- (long long)contextType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)mergeWithObject:;
- (id)attachmentID;
- (BOOL)validateObject:;
- (int)handoutAttachmentType;
- (id)initWithAttachmentID:handoutAttachmentType:contextType:appIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
