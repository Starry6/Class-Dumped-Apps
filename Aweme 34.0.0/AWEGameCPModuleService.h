@interface AWEGameCPModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gameCPCommentTabInterfaceWithAwemeModel:;
- (id)videoContainerInterface;
- (id)videoAnchorInterfaceWithAwemeModel:;
- (id)storeKitAwemeInterface;
- (id)gameCPKitService;
- (id)evaluationCardManagerInterfaceWithAwemeModel:;
- (id)audienceDetailInstanceInterfaceWithAwemeModel:;
- (id)settingInterface;
+ (id)sharedInstance;
@end
