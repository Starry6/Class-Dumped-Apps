@interface IESECShopPrehotManager : NSObject
@property (nonatomic) IESECStoreWebTabViewController webVc;
@property (nonatomic) IESECShopTabModel tabModel;
- (void)destory;
- (void)preloadISVContainerWithModel:;
- (void)setTabModel:;
- (void)setWebVc:;
- (id)tabModel;
- (id)webVc;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)tabModelWithPreloadInfo:;
+ (id)sharedInstance;
@end
