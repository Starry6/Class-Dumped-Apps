@interface IESLiveSaaSLiveRoomCastScreenDataModel : BDDynamicMTLModel
@property (nonatomic) NSString showText;
@property (nonatomic) NSNumber sdkVersion;
@property (nonatomic) NSArray allowList;
@property (nonatomic) IESLiveSaaSLiveRoomCastScreenPermissionModel permission;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)permission;
- (void).cxx_destruct;
- (void)setAllowList:;
- (id)allowList;
- (id)sdkVersion;
- (id)showText;
+ (id)permissionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
