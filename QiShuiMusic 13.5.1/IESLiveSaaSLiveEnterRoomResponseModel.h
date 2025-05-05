@interface IESLiveSaaSLiveEnterRoomResponseModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) NSNumber diggColor;
@property (nonatomic) NSNumber payScores;
@property (nonatomic) NSDictionary selfMemberMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)roomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
