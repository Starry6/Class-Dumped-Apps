@interface AWECodeGenServiceComponentToolBarModel : AWEBaseDataModel
@property (nonatomic) NSString toolBarId;
@property (nonatomic) q type;
@property (nonatomic) NSString url;
@property (nonatomic) NSString toolBarText;
@property (nonatomic) AWECodeGenToolBarStyleModel lightStyleModel;
@property (nonatomic) AWECodeGenToolBarStyleModel darkStyleModel;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)lightStyleModel;
- (void)setLightStyleModel:;
- (id)darkStyleModel;
- (void)setDarkStyleModel:;
- (id)toolBarId;
- (void)setToolBarId:;
- (id)toolBarText;
- (void)setToolBarText:;
- (void)setUrl:;
- (id)extra;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
