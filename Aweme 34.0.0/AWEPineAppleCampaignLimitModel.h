@interface AWEPineAppleCampaignLimitModel : MTLModel
@property (nonatomic) q DoNotDisturbTime;
@property (nonatomic) q GlobalLimitInterval;
@property (nonatomic) q GlobalLimit;
@property (nonatomic) q DoNotDisturbCount;
@property (nonatomic) q ShowInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowInterval:;
- (long long)DoNotDisturbTime;
- (long long)DoNotDisturbCount;
- (long long)ShowInterval;
- (long long)GlobalLimitInterval;
- (long long)GlobalLimit;
- (void)setDoNotDisturbTime:;
- (void)setGlobalLimitInterval:;
- (void)setGlobalLimit:;
- (void)setDoNotDisturbCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
