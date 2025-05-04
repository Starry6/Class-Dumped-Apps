@interface AWEIMMessageContent : NSObject
@property (nonatomic) IESIMExternalRefContent externalRef;
- (id)externalRef;
- (void)setExternalRef:;
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (void)updateMessageContentWithUploadedFileSize:fileType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (id)contentDictionary;
@end
