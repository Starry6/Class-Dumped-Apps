@interface AWEStudioMusicDetailResponse : ACCBaseApiModel
@property (nonatomic) <AWEStudioMusicModelProtocol> musicInfo;
- (id)musicInfo;
- (void)setMusicInfo:;
- (void).cxx_destruct;
+ (id)musicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
