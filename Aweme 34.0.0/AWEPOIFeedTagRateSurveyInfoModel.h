@interface AWEPOIFeedTagRateSurveyInfoModel : MTLModel
@property (nonatomic) AWEPOILynxModel surveyQuestion;
@property (nonatomic) q position;
@property (nonatomic) NSArray freqLimitInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)recordClose;
- (void)clearRecord;
- (id)freqLimitInfo;
- (id)surveyQuestion;
- (void)setSurveyQuestion:;
- (void)setFreqLimitInfo:;
- (BOOL)isNewUI;
- (long long)position;
- (void).cxx_destruct;
- (void)setPosition:;
+ (id)freqLimitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
