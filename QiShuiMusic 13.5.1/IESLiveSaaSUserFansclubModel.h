@interface IESLiveSaaSUserFansclubModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserFansclubPreferDataModel preferential;
@property (nonatomic) IESLiveSaaSUserFansclubDataModel data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentRoomData;
- (id)mapToPbModel;
- (id)preferData;
+ (id)dataJSONTransformer;
+ (id)preferentialJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
