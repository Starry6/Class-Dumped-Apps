@interface AWEIMMessageImageContent : AWEIMMessageContent
@property (nonatomic) q coverWidth;
@property (nonatomic) q coverHeight;
@property (nonatomic) NSString md5;
@property (nonatomic) IESIMURLModel resourceUrl;
- (void)setCoverHeight:;
- (long long)coverHeight;
- (long long)coverWidth;
- (void)setCoverWidth:;
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)md5;
- (void)setMd5:;
- (id)resourceUrl;
- (void)setResourceUrl:;
- (id)contentDictionary;
@end
