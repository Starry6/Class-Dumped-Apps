@interface IESLivePrivilegeGlobalModule : IESLiveModule
@property (nonatomic) IESLiveDressServiceWapper dressServiceImpl;
@property (nonatomic) IESLiveEffectMixInfoHandler effectNodeHandler;
@property (nonatomic) IESLiveAvatarServiceImpl avatarServiceImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)JSBHandler;
- (id)avatarService;
- (id)avatarServiceImpl;
- (id)dressResourceService;
- (id)dressService;
- (id)dressServiceImpl;
- (id)effectNodeHandler;
- (id)effectService;
- (void)setAvatarServiceImpl:;
- (void)setDressServiceImpl:;
- (void)setEffectNodeHandler:;
- (void).cxx_destruct;
@end
