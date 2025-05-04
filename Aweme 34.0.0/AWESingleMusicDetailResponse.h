@interface AWESingleMusicDetailResponse : AWEBaseApiModel
@property (nonatomic) AWEMediaModel mediaInfo;
- (void).cxx_destruct;
- (id)mediaInfo;
- (void)setMediaInfo:;
+ (id)mediaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
