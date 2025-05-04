@interface AWEContactUploadUILimitSettings : AWEBaseApiModel
@property (nonatomic) q maxCloseTimes;
@property (nonatomic) q maxDisplayTimes;
- (long long)maxCloseTimes;
- (void)setMaxCloseTimes:;
- (long long)maxDisplayTimes;
- (void)setMaxDisplayTimes:;
+ (id)JSONKeyPathsByPropertyKey;
@end
