@interface AWELeftSideBarListCellDataModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needLogin;
@property (nonatomic) q uiStyle;
@property (nonatomic) AWELeftSideBarListCellLeftIconModel leftIcon;
@property (nonatomic) AWELeftSideBarConfigModel redDotConfig;
@property (nonatomic) AWELeftSideBarConfigModel subTitleConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubTitleConfig:;
- (BOOL)needLogin;
- (void)setLeftIcon:;
- (void)setNeedLogin:;
- (id)redDotConfig;
- (void)setRedDotConfig:;
- (id)subTitleConfig;
- (id)schema;
- (void)setUiStyle:;
- (void)setSchema:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (long long)uiStyle;
- (void).cxx_destruct;
- (id)title;
- (double)startTime;
- (void)setTitle:;
- (id)leftIcon;
+ (id)leftIconJSONTransformer;
+ (id)subTitleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)redDotConfigJSONTransformer;
@end
