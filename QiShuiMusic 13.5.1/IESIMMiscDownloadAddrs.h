@interface IESIMMiscDownloadAddrs : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel snapchat;
@property (nonatomic) IESIMURLModel lite;
@property (nonatomic) IESIMURLModel suffixScene;
- (void)setSuffixScene:;
- (id)lite;
- (void)setLite:;
- (void)setSnapchat:;
- (id)snapchat;
- (id)suffixScene;
- (void).cxx_destruct;
+ (id)liteJSONTransformer;
+ (id)snapchatJSONTransformer;
+ (id)suffixSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
