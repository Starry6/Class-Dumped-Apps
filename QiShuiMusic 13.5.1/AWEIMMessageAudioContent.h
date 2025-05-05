@interface AWEIMMessageAudioContent : AWEIMMessageContent
@property (nonatomic) NSString md5;
@property (nonatomic) IESIMURLModel resourceUrl;
@property (nonatomic) q duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (id)initWithDictionary:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (id)copyWithZone:;
- (id)md5;
- (void)setMd5:;
- (id)resourceUrl;
- (void)setResourceUrl:;
- (id)contentDictionary;
@end
