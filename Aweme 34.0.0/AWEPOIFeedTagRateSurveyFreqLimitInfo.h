@interface AWEPOIFeedTagRateSurveyFreqLimitInfo : MTLModel
@property (nonatomic) Q freqActionType;
@property (nonatomic) NSString freqActionName;
@property (nonatomic) q freqLimitSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)freqActionName;
- (long long)freqLimitSeconds;
- (unsigned long long)freqActionType;
- (void)setFreqActionType:;
- (void)setFreqActionName:;
- (void)setFreqLimitSeconds:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
