@interface AWEECAnchorFloatingViewWrapper : NSObject
@property (nonatomic) NSDictionary trackedMap;
@property (nonatomic) q sceneType;
@property (nonatomic) UIView floatingView;
- (void)setTrackedMap:;
- (id)trackedMap;
- (BOOL)hasTrackedForTabID:;
- (id)initWithView:;
- (id)floatingView;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:;
- (void)setFloatingView:;
@end
