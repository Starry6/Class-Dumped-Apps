@interface IESLiveInteractServiceImpl : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentRoomTypeForSlideMonitor:;
- (void)currentFlattenSceneDidChangedFrom:to:;
- (unsigned long long)currentInteractiveScene;
- (void)didSetAttachingDIContext;
- (void)endCommunityInteractWithScene:;
- (void)endRevenueInteractWithScene:;
- (void)startCommunityInteractWithScene:;
- (void)startRevenueInteractWithScene:;
- (void)setScene:;
- (unsigned long long)scene;
@end
