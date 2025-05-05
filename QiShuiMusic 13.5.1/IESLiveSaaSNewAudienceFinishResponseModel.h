@interface IESLiveSaaSNewAudienceFinishResponseModel : BDDynamicMTLModel
@property (nonatomic) NSArray roomList;
@property (nonatomic) IESLiveSaaSNewAudienceFinishAnchorModel anchorModel;
@property (nonatomic) IESLiveSaaSNewAudienceEndingReplayInfoModel endingReplayInfo;
@property (nonatomic) NSNumber nextWaitSeconds;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nextWaitSeconds;
- (id)endingReplayInfo;
- (void)setEndingReplayInfo:;
- (void)setNextWaitSeconds:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)endingReplayInfoJSONTransformer;
+ (id)anchorModelJSONTransformer;
+ (id)roomListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
