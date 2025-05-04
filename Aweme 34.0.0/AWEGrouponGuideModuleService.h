@interface AWEGrouponGuideModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nearbyGuideShowManager;
- (void)tryShowGuideWithModel:;
- (void)handleByteSyncGeneralBubbleData:noticeType:;
- (BOOL)registAllGuideImp;
- (void)hanldTimedGuideWithInitModel:;
- (void)startRepeatTimer;
- (void)tryRecoverStorageTabDot;
- (void)removeNearbyDotWithPageType:removeType:completion:;
- (BOOL)removeNearbyDotWithScene:pageType:removeType:completion:;
@end
