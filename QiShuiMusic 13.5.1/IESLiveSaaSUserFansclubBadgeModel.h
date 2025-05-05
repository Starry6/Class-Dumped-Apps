@interface IESLiveSaaSUserFansclubBadgeModel : BDDynamicMTLModel
@property (nonatomic) NSString title;
@property (nonatomic) IESLiveSaaSUserFansBadgeIconModel icons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapToPbModel;
- (id)preferIcon;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
