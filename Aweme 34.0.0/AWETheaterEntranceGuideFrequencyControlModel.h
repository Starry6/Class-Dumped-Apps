@interface AWETheaterEntranceGuideFrequencyControlModel : AWEBaseApiModel
@property (nonatomic) q dayInterval;
@property (nonatomic) q maxCountInDayInterval;
@property (nonatomic) q maxCountInInstall;
- (void)setDayInterval:;
- (long long)maxCountInDayInterval;
- (void)setMaxCountInDayInterval:;
- (long long)maxCountInInstall;
- (void)setMaxCountInInstall:;
- (long long)dayInterval;
+ (id)JSONKeyPathsByPropertyKey;
@end
