@interface IESLiveSaaSUserFansclubPreferentialModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserFansclubBadgeMedalModel badge;
@property (nonatomic) Q level;
@property (nonatomic) Q status;
@property (nonatomic) IESLiveSaaSUserModel anchor;
@property (nonatomic) BOOL isActive;
@property (nonatomic) NSString clubName;
@property (nonatomic) Q availableGiftIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsActive:;
- (BOOL)isActive;
+ (id)badgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
