@interface AWEHomePageRemoteModel : MTLModel
@property (nonatomic) q panelType;
@property (nonatomic) AWEHomePageRemoteCommonImageModel panelIconModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray modules;
@property (nonatomic) AWEHomePageRemoteGuideTipsModel guideTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)panelType;
- (void)setPanelType:;
- (id)guideTips;
- (id)panelIconModel;
- (void)setPanelIconModel:;
- (void)setGuideTips:;
- (id)modules;
- (id)description;
- (void)setModules:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)isModelValid;
+ (id)modulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
