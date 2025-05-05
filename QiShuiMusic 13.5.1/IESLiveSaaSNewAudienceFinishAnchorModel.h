@interface IESLiveSaaSNewAudienceFinishAnchorModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) NSNumber totalScore;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSNumber totalUserCount;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:error:;
+ (id)roomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
