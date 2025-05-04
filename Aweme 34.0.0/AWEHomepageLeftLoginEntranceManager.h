@interface AWEHomepageLeftLoginEntranceManager : HTSService
@property (nonatomic) AWEHomepageLeftLoginEntranceController entranceController;
@property (nonatomic) @? updateLeftEntranceBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftLoginEntranceView;
- (BOOL)enableLeftLogin;
- (id)leftLoginSize;
- (void)registerHomepageLeftEntranceIfNeedBlock:;
- (void)handleUpdateHomepageLeftEntrance;
- (id)entranceController;
- (id)updateLeftEntranceBlock;
- (void)setUpdateLeftEntranceBlock:;
- (void)setEntranceController:;
- (void).cxx_destruct;
@end
