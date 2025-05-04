@interface AWEMusicStreamingImpl.LunaMCheckResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSArray mediaStatus;
- (id)mediaStatus;
- (void)setMediaStatus:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)mediaStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
