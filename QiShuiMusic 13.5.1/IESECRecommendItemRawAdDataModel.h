@interface IESECRecommendItemRawAdDataModel : MTLModel
@property (nonatomic) q adID;
@property (nonatomic) q creativeID;
@property (nonatomic) q groupID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSArray trackUrlList;
@property (nonatomic) NSArray clickTrackUrlList;
@property (nonatomic) IESECRecommendItemRawAdOpenUrlParams openUrlParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)adID;
- (id)clickTrackUrlList;
- (id)logExtra;
- (id)openUrlParams;
- (void)setAdID:;
- (void)setClickTrackUrlList:;
- (void)setCreativeID:;
- (void)setLogExtra:;
- (void)setOpenUrlParams:;
- (void)setTrackUrlList:;
- (id)trackUrlList;
- (void)setGroupID:;
- (long long)groupID;
- (void).cxx_destruct;
- (long long)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
