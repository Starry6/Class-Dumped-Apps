@interface AWESocialSettingNearbyCacheConfig : AWEBaseApiModel
@property (nonatomic) BOOL cacheFlag;
@property (nonatomic) q cacheValidTime;
- (void)setCacheValidTime:;
- (BOOL)cacheFlag;
- (void)setCacheFlag:;
- (long long)cacheValidTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
