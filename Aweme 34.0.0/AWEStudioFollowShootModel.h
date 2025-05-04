@interface AWEStudioFollowShootModel : NSObject
@property (nonatomic) AWEStudioFollowShootNodeModel firstConsumptionNodeModel;
@property (nonatomic) AWEStudioFollowShootNodeModel lastConsumptionNodeModel;
@property (nonatomic) AWEStudioFollowShootNodeModel contentNodeModel;
@property (nonatomic) NSString rootGid;
- (id)rootGid;
- (void)setRootGid:;
- (id)firstConsumptionNodeModel;
- (id)lastConsumptionNodeModel;
- (id)contentNodeModel;
- (void)setFirstConsumptionNodeModel:;
- (void)setLastConsumptionNodeModel:;
- (void)setContentNodeModel:;
- (void).cxx_destruct;
@end
