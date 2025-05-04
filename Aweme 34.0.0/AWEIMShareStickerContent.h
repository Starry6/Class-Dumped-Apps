@interface AWEIMShareStickerContent : AWEIMMessageContent
@property (nonatomic) NSArray videoCoverURLs;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString stickerName;
@property (nonatomic) q userCount;
@property (nonatomic) NSString stickerID;
@property (nonatomic) BOOL isImageTemplateSticker;
- (void)setStickerID:;
- (id)stickerID;
- (BOOL)isImageTemplateSticker;
- (void)setIsImageTemplateSticker:;
- (void)setVideoCoverURLs:;
- (id)videoCoverURLs;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (void)setUserCount:;
- (long long)userCount;
- (id)stickerName;
- (void)setStickerName:;
- (id)contentDictionary;
- (id)coverURL;
- (void)setCoverURL:;
@end
