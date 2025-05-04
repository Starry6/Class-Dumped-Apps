@interface AWECodeGenAnchorSceneInfoModel : AWEBaseDataModel
@property (nonatomic) q sceneType;
@property (nonatomic) BOOL isShow;
@property (nonatomic) NSString tracerInfo;
@property (nonatomic) NSString extra;
@property (nonatomic) AWECodeGenAnchorTextInfoModel subDescModel;
@property (nonatomic) AWECodeGenAnchorTextInfoModel funcDescModel;
@property (nonatomic) NSString lightIconUrl;
@property (nonatomic) NSString darkIconUrl;
- (void)setExtra:;
- (id)tracerInfo;
- (id)subDescModel;
- (id)funcDescModel;
- (id)darkIconUrl;
- (id)lightIconUrl;
- (BOOL)isShow;
- (void)setIsShow:;
- (void)setLightIconUrl:;
- (void)setDarkIconUrl:;
- (void)setTracerInfo:;
- (void)setSubDescModel:;
- (void)setFuncDescModel:;
- (id)extra;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
