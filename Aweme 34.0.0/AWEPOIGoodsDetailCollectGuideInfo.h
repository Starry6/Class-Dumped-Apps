@interface AWEPOIGoodsDetailCollectGuideInfo : NSObject
@property (nonatomic) NSDictionary collectGuideInfo;
@property (nonatomic) double showTime;
@property (nonatomic) q poiTriggerTimes;
@property (nonatomic) q guideType;
@property (nonatomic) NSString guideText;
@property (nonatomic) NSDictionary guideFrequencyMap;
@property (nonatomic) NSDictionary sortRuleGuide;
@property (nonatomic) q crossPoi;
@property (nonatomic) q xDay;
@property (nonatomic) q yTime;
@property (nonatomic) q stillShowBubble;
- (id)guideText;
- (void)setGuideText:;
- (double)showTime;
- (void)setShowTime:;
- (long long)guideType;
- (void)setGuideType:;
- (id)collectGuideInfo;
- (void)setCollectGuideInfo:;
- (long long)poiTriggerTimes;
- (void)setPoiTriggerTimes:;
- (id)guideFrequencyMap;
- (void)setGuideFrequencyMap:;
- (id)sortRuleGuide;
- (void)setSortRuleGuide:;
- (long long)crossPoi;
- (void)setCrossPoi:;
- (long long)xDay;
- (void)setXDay:;
- (long long)yTime;
- (void)setYTime:;
- (long long)stillShowBubble;
- (void)setStillShowBubble:;
- (id)initWithDataSource:;
- (void).cxx_destruct;
@end
