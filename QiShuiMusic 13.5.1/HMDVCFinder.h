@interface HMDVCFinder : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString previousScene;
@property (nonatomic) NSString sceneWithUpdate;
@property (nonatomic) ^v scene_vc_unsafe;
- (id)scene_vc_unsafe;
- (id)initWithDefault;
- (id)sceneWithUpdate;
- (void)mainThreadUpdate;
- (id)previousScene;
- (void)triggerUpdateImmediately;
- (void)triggerUpdate;
- (id)init;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (id)finder;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
