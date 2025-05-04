@interface AWESearchTabGuideResponse : AWEBaseApiModel
@property (nonatomic) double initTimestamp;
@property (nonatomic) q bubbleStyleType;
@property (nonatomic) AWESearchTabGuideExitRuleModel globalExitRule;
@property (nonatomic) NSArray guideList;
- (id)globalExitRule;
- (id)guideList;
- (void)setGlobalExitRule:;
- (double)initTimestamp;
- (void)setInitTimestamp:;
- (void)setBubbleStyleType:;
- (void)setGuideList:;
- (long long)bubbleStyleType;
- (id)init;
- (void).cxx_destruct;
+ (id)guideListJSONTransformer;
+ (id)globalExitRuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
