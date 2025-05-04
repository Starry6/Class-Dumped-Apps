@interface AWEHotSearchChallengeInfoModel : AWEBaseApiModel
@property (nonatomic) NSNumber participantNumber;
@property (nonatomic) NSString trendsStickerId;
@property (nonatomic) NSNumber trendsId;
@property (nonatomic) NSDictionary trendsMusicId;
@property (nonatomic) NSArray challengeItemDetails;
@property (nonatomic) NSString anchorId;
@property (nonatomic) BOOL isAIEffect;
@property (nonatomic) BOOL isImageTextTemplate;
- (id)anchorId;
- (void)setAnchorId:;
- (void)setTrendsId:;
- (id)trendsMusicId;
- (id)trendsStickerId;
- (BOOL)isAIEffect;
- (BOOL)isImageTextTemplate;
- (id)participantNumber;
- (void)setParticipantNumber:;
- (void)setTrendsStickerId:;
- (id)trendsId;
- (void)setTrendsMusicId:;
- (id)challengeItemDetails;
- (void)setChallengeItemDetails:;
- (void)setIsAIEffect:;
- (void)setIsImageTextTemplate:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
