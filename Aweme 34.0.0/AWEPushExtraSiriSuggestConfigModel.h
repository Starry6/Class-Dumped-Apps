@interface AWEPushExtraSiriSuggestConfigModel : MTLModel
@property (nonatomic) q frequencyControlledCount;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPrediction;
@property (nonatomic) double expireTime;
@property (nonatomic) NSDate date;
@property (nonatomic) q templateID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)frequencyControlledCount;
- (void)setFrequencyControlledCount:;
- (void)setDate:;
- (BOOL)eligibleForHandoff;
- (long long)templateID;
- (void)setTemplateID:;
- (BOOL)eligibleForPrediction;
- (void)setEligibleForPrediction:;
- (void).cxx_destruct;
- (void)setEligibleForHandoff:;
- (id)date;
- (BOOL)eligibleForSearch;
- (void)setEligibleForSearch:;
- (double)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
