@interface AWEIMPlayletVideoMessageContent : AWEIMMessageContent
@property (nonatomic) NSArray videoCoverURLs;
@property (nonatomic) NSArray videoCoverItems;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString playletVideoName;
@property (nonatomic) q playCount;
@property (nonatomic) NSString playletVideoId;
@property (nonatomic) NSString authorID;
- (id)videoCoverItems;
- (id)playletVideoId;
- (id)playletVideoName;
- (void)setVideoCoverURLs:;
- (void)setVideoCoverItems:;
- (void)setPlayletVideoName:;
- (void)setPlayletVideoId:;
- (id)videoCoverURLs;
- (long long)playCount;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (id)contentDictionary;
- (id)authorID;
- (void)setAuthorID:;
- (id)coverURL;
- (void)setCoverURL:;
@end
