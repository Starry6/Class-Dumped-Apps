@interface HMDHermasCleanupSetting : NSObject
@property (nonatomic) Q maxStoreSize;
@property (nonatomic) q maxStoreTime;
- (unsigned long long)maxStoreSize;
- (long long)maxStoreTime;
- (void)setMaxStoreSize:;
- (void)setMaxStoreTime:;
+ (id)hmd_attributeMapDictionary;
@end
