@interface VKCustomFeatureDataSourceObserverThunk : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)clearObserver;
- (void)dataSource:didChangeSceneState:;
- (void)dataSource:didChangeSceneID:;
- (void)dataSource:featuresDidChangeForRect:;
- (void)globalFeaturesDidChangeForDataSource:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataSource:observer:;
@end
