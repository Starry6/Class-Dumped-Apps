@interface AWEIMMixVideoMessageContent : AWEIMMessageContent
@property (nonatomic) NSArray videoCoverURLs;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString mixVideoName;
@property (nonatomic) q playCount;
@property (nonatomic) NSString mixVideoId;
@property (nonatomic) NSString authorID;
- (id)mixVideoId;
- (id)mixVideoName;
- (void)setMixVideoId:;
- (void)setMixVideoName:;
- (void)setVideoCoverURLs:;
- (id)videoCoverURLs;
- (long long)playCount;
- (void)setPlayCount:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)contentDictionary;
- (id)authorID;
- (void)setAuthorID:;
- (id)coverURL;
- (void)setCoverURL:;
@end
