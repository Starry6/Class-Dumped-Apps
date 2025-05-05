@interface AWEIMShareStickerContent : AWEIMMessageContent
@property (nonatomic) NSArray videoCoverURLs;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString stickerName;
@property (nonatomic) q userCount;
@property (nonatomic) NSString stickerID;
- (void)setStickerID:;
- (void)setVideoCoverURLs:;
- (id)stickerID;
- (id)videoCoverURLs;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)userCount;
- (void)setUserCount:;
- (id)stickerName;
- (void)setStickerName:;
- (id)contentDictionary;
- (id)coverURL;
- (void)setCoverURL:;
@end
