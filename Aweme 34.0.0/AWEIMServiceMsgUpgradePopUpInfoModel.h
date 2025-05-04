@interface AWEIMServiceMsgUpgradePopUpInfoModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString titleIcon;
@property (nonatomic) NSArray content;
- (id)content;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTitleIcon:;
- (id)titleIcon;
+ (id)generateFromGlobalConfig;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)contentJSONTransformer;
@end
