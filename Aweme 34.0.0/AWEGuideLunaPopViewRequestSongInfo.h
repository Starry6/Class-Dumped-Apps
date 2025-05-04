@interface AWEGuideLunaPopViewRequestSongInfo : AWEBaseApiModel
@property (nonatomic) q collectCount;
@property (nonatomic) q commentCount;
@property (nonatomic) q shareCount;
- (void)setCollectCount:;
- (long long)collectCount;
- (void)setShareCount:;
- (long long)shareCount;
- (long long)commentCount;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
