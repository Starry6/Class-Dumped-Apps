@interface HMDUserExceptionConfig : HMDTrackerConfig
@property (nonatomic) q maxUploadCount;
@property (nonatomic) NSDictionary typeBlockList;
@property (nonatomic) NSArray typeAllowList;
- (id)getModule;
- (long long)maxUploadCount;
- (void)setMaxUploadCount:;
- (void)setTypeAllowList:;
- (void)setTypeBlockList:;
- (id)typeAllowList;
- (id)typeBlockList;
- (void).cxx_destruct;
- (BOOL)canStart;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
