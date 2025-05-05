@interface HMDConfigFetchSetting : HMDCommonAPISetting
@property (nonatomic) Q fetchInterval;
- (unsigned long long)fetchInterval;
- (void)setFetchInterval:;
+ (id)hmd_attributeMapDictionary;
@end
