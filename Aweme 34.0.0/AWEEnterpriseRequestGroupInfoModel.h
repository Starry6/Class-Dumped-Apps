@interface AWEEnterpriseRequestGroupInfoModel : MTLModel
@property (nonatomic) NSString statusMsg;
@property (nonatomic) BOOL noValidGroups;
@property (nonatomic) AWEEnterpriseRequestTargetGroupModel targetGroup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (BOOL)noValidGroups;
- (void)setNoValidGroups:;
- (void).cxx_destruct;
- (void)setTargetGroup:;
- (id)targetGroup;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
