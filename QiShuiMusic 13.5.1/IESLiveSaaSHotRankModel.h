@interface IESLiveSaaSHotRankModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel owner;
@property (nonatomic) NSNumber rank;
@property (nonatomic) IESLiveSaaSSimpleRoomModel room;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ownerJSONTransformer;
+ (id)roomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
