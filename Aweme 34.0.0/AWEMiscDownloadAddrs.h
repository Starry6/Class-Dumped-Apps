@interface AWEMiscDownloadAddrs : AWEBaseApiModel
@property (nonatomic) AWEURLModel snapchat;
@property (nonatomic) AWEURLModel lite;
@property (nonatomic) AWEURLModel suffixScene;
- (id)snapchat;
- (void)setSnapchat:;
- (id)lite;
- (void)setLite:;
- (id)suffixScene;
- (void)setSuffixScene:;
- (void).cxx_destruct;
+ (id)snapchatJSONTransformer;
+ (id)liteJSONTransformer;
+ (id)suffixSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
