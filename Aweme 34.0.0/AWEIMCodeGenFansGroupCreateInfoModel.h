@interface AWEIMCodeGenFansGroupCreateInfoModel : AWEBaseDataModel
@property (nonatomic) NSString p_newGroupName;
@property (nonatomic) NSInteger groupNumLeft;
@property (nonatomic) NSInteger defaultAuditSwitch;
@property (nonatomic) NSInteger defaultLiveAutoSync;
@property (nonatomic) NSInteger defaultItemAutoSync;
@property (nonatomic) NSString legalUrl;
@property (nonatomic) NSInteger groupCountMaxLimit;
- (int)groupNumLeft;
- (void)setGroupNumLeft:;
- (id)p_newGroupName;
- (void)setP_newGroupName:;
- (int)defaultAuditSwitch;
- (void)setDefaultAuditSwitch:;
- (int)defaultLiveAutoSync;
- (void)setDefaultLiveAutoSync:;
- (int)defaultItemAutoSync;
- (void)setDefaultItemAutoSync:;
- (id)legalUrl;
- (void)setLegalUrl:;
- (int)groupCountMaxLimit;
- (void)setGroupCountMaxLimit:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
