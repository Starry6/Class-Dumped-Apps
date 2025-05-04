@interface AWEFeedTabJumpStrategyModel : MTLModel
@property (nonatomic) AWEFeedTabJumpRollBackConfig rollBackConfig;
@property (nonatomic) q showInternalHours;
@property (nonatomic) q showFrequencyPerInternalHours;
@property (nonatomic) NSArray strategyArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRollBackConfig:;
- (id)strategyArray;
- (void)setStrategyArray:;
- (id)rollBackConfig;
- (long long)showInternalHours;
- (long long)showFrequencyPerInternalHours;
- (void)setShowInternalHours:;
- (void)setShowFrequencyPerInternalHours:;
- (void).cxx_destruct;
+ (id)strategyArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
