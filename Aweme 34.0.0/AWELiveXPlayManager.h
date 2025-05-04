@interface AWELiveXPlayManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (void)cancelLoadItemIfNeeded;
- (void)preloadSceneWithConfig:;
- (void)setupXPlayManager;
- (void)loadPlayInstanceWithModel:callback:;
@end
