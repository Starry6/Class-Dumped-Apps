@interface AWEMusicStreamingImpl.LunaPlayerInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q expireTime;
@property (nonatomic) NSString mediaID;
@property (nonatomic) NSString url;
@property (nonatomic) NSString videoModel;
@property (nonatomic) q videoModelType;
- (id)videoModel;
- (void)setVideoModel:;
- (long long)videoModelType;
- (void)setVideoModelType:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setUrl:;
- (void).cxx_destruct;
- (BOOL)isPreview;
- (id)url;
- (id)initWithCoder:;
- (long long)expireTime;
- (void)setExpireTime:;
- (id)mediaID;
- (void)setMediaID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
