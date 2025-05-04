@interface AWEIMCreateGroupInfo : AWEBaseApiModel
@property (nonatomic) NSString groupName;
@property (nonatomic) q groupNumLeft;
@property (nonatomic) q defaultAuditSwitch;
@property (nonatomic) q defaultLiveAutoSync;
@property (nonatomic) q defaultItemAutoSync;
@property (nonatomic) NSString legalUrl;
@property (nonatomic) q groupCountMaxLimit;
- (long long)groupNumLeft;
- (void)setGroupNumLeft:;
- (long long)defaultAuditSwitch;
- (void)setDefaultAuditSwitch:;
- (long long)defaultLiveAutoSync;
- (void)setDefaultLiveAutoSync:;
- (long long)defaultItemAutoSync;
- (void)setDefaultItemAutoSync:;
- (id)legalUrl;
- (void)setLegalUrl:;
- (long long)groupCountMaxLimit;
- (void)setGroupCountMaxLimit:;
- (void)setGroupName:;
- (id)groupName;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
