@interface IESLiveSaaSUserFansclubPreferDataModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserFansclubDataModel presonalProfile;
@property (nonatomic) IESLiveSaaSUserFansclubDataModel otherRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)otherRoomProfileJSONTransformer;
+ (id)presonalProfileJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
