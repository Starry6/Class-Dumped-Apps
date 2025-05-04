@interface AWEIMMessageAudioContent : AWEIMMessageContent
@property (nonatomic) NSString md5;
@property (nonatomic) AWEURLModel resourceUrl;
@property (nonatomic) q duration;
@property (nonatomic) NSArray averagePowerArr;
@property (nonatomic) NSString contentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAveragePowerArr:;
- (id)averagePowerArr;
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (id)contentType;
- (void)setDuration:;
- (void)setContentType:;
- (void).cxx_destruct;
- (long long)duration;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (void)setMd5:;
- (id)md5;
- (void)setResourceUrl:;
- (id)resourceUrl;
- (id)contentDictionary;
@end
