@interface IESLiveSaaSUserFansclubDataModel : BDDynamicMTLModel
@property (nonatomic) NSString anchorID;
@property (nonatomic) NSString anchorUnionID;
@property (nonatomic) NSString clubName;
@property (nonatomic) NSNumber level;
@property (nonatomic) NSNumber status;
@property (nonatomic) IESLiveSaaSUserFansclubBadgeModel badge;
@property (nonatomic) NSArray availableGiftIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapToPbModel;
- (BOOL)isActive;
+ (id)badgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
