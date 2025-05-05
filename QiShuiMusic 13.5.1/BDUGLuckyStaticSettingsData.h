@interface BDUGLuckyStaticSettingsData : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyStaticGeneralSettingsMeta settingsMeta;
@property (nonatomic) NSDictionary activityInfo;
@property (nonatomic) BDUGLuckyStaticCommonInfo commonInfo;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL noUpdate;
@property (nonatomic) BDUGLuckyEntryInfo entryInfo;
- (id)entryInfo;
- (BOOL)modelCustomTransformFromDictionary:;
- (BOOL)noUpdate;
- (void)setActivityInfo:;
- (void)setEntryInfo:;
- (void)setExtra:;
- (void)setNoUpdate:;
- (void)setSettingsMeta:;
- (id)settingsMeta;
- (id)commonInfo;
- (void)setCommonInfo:;
- (id)extra;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)activityInfo;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
