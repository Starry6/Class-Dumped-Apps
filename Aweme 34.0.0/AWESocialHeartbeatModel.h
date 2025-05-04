@interface AWESocialHeartbeatModel : AWEBaseApiModel
@property (nonatomic) q heatbeatInterval;
@property (nonatomic) NSArray nearbyBubbleInfoList;
- (id)nearbyBubbleInfoList;
- (long long)heatbeatInterval;
- (void)setHeatbeatInterval:;
- (void)setNearbyBubbleInfoList:;
- (void).cxx_destruct;
+ (id)nearbyBubbleInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
