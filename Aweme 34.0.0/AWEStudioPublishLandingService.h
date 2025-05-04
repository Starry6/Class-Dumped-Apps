@interface AWEStudioPublishLandingService : HTSService
@property (nonatomic) NSMutableArray landingInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)landingInfos;
- (void)addPublishLandingInfo:;
- (void)removePublishLandingInfo:;
- (id)getPublishLandingInfoWithTaskID:;
- (void)landingWithTask:;
- (BOOL)enablePublishQuickShareProgressViewShowInFriend;
- (BOOL)enablePublishLandingOptimize;
- (id)getPublishLandingInfoWithAwemeID:;
- (id)landingInfoWithTask:;
- (void)setLandingInfos:;
- (void)landingToTab:publishModel:;
- (void)trackWithLandingInfo:task:;
- (id)noLandingStrategyNameList;
- (id)strategyWithTask:landingStrategyNameList:;
- (id)landingStrategyNameList;
- (void)routerWithTabIds:publishModel:;
- (id)init;
- (void).cxx_destruct;
@end
