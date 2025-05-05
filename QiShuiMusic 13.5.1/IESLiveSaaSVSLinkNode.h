@interface IESLiveSaaSVSLinkNode : BDDynamicMTLModel
@property (nonatomic) q roomId;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) IESLiveSaaSUserModel owner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ownerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
