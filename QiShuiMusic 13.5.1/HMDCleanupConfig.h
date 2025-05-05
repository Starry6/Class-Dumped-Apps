@interface HMDCleanupConfig : NSObject
@property (nonatomic) double outdatedTimestamp;
@property (nonatomic) Q maxSessionCount;
@property (nonatomic) double maxRemainDays;
@property (nonatomic) NSArray andConditions;
@property (nonatomic) Q expectedDBSize;
@property (nonatomic) Q devastateDBSize;
@property (nonatomic) HMDHermasCleanupSetting hermasCleanupSetting;
- (unsigned long long)devastateDBSize;
- (unsigned long long)maxSessionCount;
- (id)andConditions;
- (unsigned long long)expectedDBSize;
- (id)hermasCleanupSetting;
- (double)maxRemainDays;
- (double)outdatedTimestamp;
- (void)setAndConditions:;
- (void)setDevastateDBSize:;
- (void)setExpectedDBSize:;
- (void)setHermasCleanupSetting:;
- (void)setMaxRemainDays:;
- (void)setMaxSessionCount:;
- (void)setOutdatedTimestamp:;
- (void).cxx_destruct;
+ (id)hmd_attributeMapDictionary;
@end
