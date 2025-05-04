@interface AWEAwemeGoodsExtra : MTLModel
@property (nonatomic) AWEURLModel bgVideoPlayURL;
@property (nonatomic) IESECURLModel bgVideoCoverURL;
@property (nonatomic) NSString backgroundPicURL;
@property (nonatomic) NSString musicURL;
@property (nonatomic) q goodsCardStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicURL;
- (void)setMusicURL:;
- (id)bgVideoPlayURL;
- (void)setBgVideoPlayURL:;
- (id)bgVideoCoverURL;
- (void)setBgVideoCoverURL:;
- (id)backgroundPicURL;
- (void)setBackgroundPicURL:;
- (long long)goodsCardStyle;
- (void)setGoodsCardStyle:;
- (void).cxx_destruct;
+ (id)bgVideoPlayURLJSONTransformer;
+ (id)bgVideoCoverURLJSONTransformer;
+ (id)goodsCardStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
