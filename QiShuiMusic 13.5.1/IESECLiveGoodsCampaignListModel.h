@interface IESECLiveGoodsCampaignListModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray campaignList;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSNumber logicalClock;
- (id)campaignList;
- (void)setCampaignList:;
- (void)setServerTime:;
- (void).cxx_destruct;
- (id)serverTime;
- (id)logicalClock;
- (void)setLogicalClock:;
+ (id)campaignListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
