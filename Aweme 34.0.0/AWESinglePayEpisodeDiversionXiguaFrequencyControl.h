@interface AWESinglePayEpisodeDiversionXiguaFrequencyControl : MTLModel
@property (nonatomic) q maxShowCount;
@property (nonatomic) q maxShowCountInterval;
@property (nonatomic) q maxContinuousCloseCount;
@property (nonatomic) q forbidShowIntervalAfterContinuousClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMaxShowCount:;
- (long long)maxShowCount;
- (long long)maxShowCountInterval;
- (void)setMaxShowCountInterval:;
- (long long)maxContinuousCloseCount;
- (void)setMaxContinuousCloseCount:;
- (long long)forbidShowIntervalAfterContinuousClose;
- (void)setForbidShowIntervalAfterContinuousClose:;
+ (id)JSONKeyPathsByPropertyKey;
@end
