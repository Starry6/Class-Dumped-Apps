@interface IESLiveSaaSRoomAuthSpecialStyle : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSRoomAuthSpecialStyleStyle like;
@property (nonatomic) IESLiveSaaSRoomAuthChat chat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLike:;
- (void).cxx_destruct;
- (id)like;
- (void)setChat:;
- (id)chat;
+ (id)chatJSONTransformer;
+ (id)likeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
