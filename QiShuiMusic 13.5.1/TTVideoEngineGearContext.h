@interface TTVideoEngineGearContext : NSObject
@property (nonatomic) <TTVideoEngineGearStrategyDelegate> gearDelegate;
@property (nonatomic) TTVideoEngineModel videoModel;
@property (nonatomic) @ userData;
- (id)gearDelegate;
- (void)setGearDelegate:;
- (void)setVideoModel:;
- (id)videoModel;
- (void)setUserData:;
- (void).cxx_destruct;
- (id)userData;
@end
