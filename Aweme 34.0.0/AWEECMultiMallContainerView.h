@interface AWEECMultiMallContainerView : UIView
@property (nonatomic) NSMutableDictionary floatingViewMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasMarketingResWithSceneType:tabInfo:;
- (void)switchToNextTabInfo:;
- (BOOL)needReportMarketingResShowWithSceneType:tabInfo:;
- (void)setFloatingViewMap:;
- (id)floatingViewMap;
- (void)didShowAnchorFloatingView:token:sceneType:;
- (id)init;
- (void).cxx_destruct;
@end
