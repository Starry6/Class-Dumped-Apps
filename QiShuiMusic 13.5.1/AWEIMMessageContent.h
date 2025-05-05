@interface AWEIMMessageContent : NSObject
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (id)contentDictionary;
@end
