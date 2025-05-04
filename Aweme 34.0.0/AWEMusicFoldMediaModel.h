@interface AWEMusicFoldMediaModel : AWEBaseApiModel
@property (nonatomic) AWEMediaModel mainMedia;
@property (nonatomic) NSArray subMediaList;
- (id)mainMedia;
- (void)setMainMedia:;
- (id)subMediaList;
- (void)setSubMediaList:;
- (void).cxx_destruct;
+ (id)mainMediaJSONTransformer;
+ (id)subMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
