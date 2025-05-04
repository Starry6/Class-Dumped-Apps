@interface AWESearchVideoPreloadManager : NSObject
@property (nonatomic) BOOL p_enableVideoPreload;
@property (nonatomic) BOOL p_enableVideoPreloadCancel;
@property (nonatomic) NSString p_preloadBizScene;
@property (nonatomic) <AWEFeedPreloadManagerProtocol> p_preloadManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadVideoModel:;
- (void)preloadVideoWithModels:fromIndex:;
- (void)preloadVideoModel:referString:;
- (void)setP_enableVideoPreload:;
- (BOOL)p_enableVideoPreload;
- (void)setP_enableVideoPreloadCancel:;
- (void)setP_preloadBizScene:;
- (id)p_preloadBizScene;
- (void)setP_preloadManager:;
- (id)p_preloadManager;
- (BOOL)p_enableVideoPreloadCancel;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
