@interface IESLiveSaaSLivingRoomAttrs : BDDynamicMTLModel
@property (nonatomic) NSNumber adminFlag;
@property (nonatomic) NSNumber silenceFlag;
@property (nonatomic) NSNumber superAdminFlag;
@property (nonatomic) NSNumber blackFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapToPbModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
