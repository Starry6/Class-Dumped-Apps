@interface AWEMVDataPreloadVideoPlugin : NSObject
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preloadManager;
- (void)setPreloadManager:;
- (id)mvContext;
- (void)setMvContext:;
- (void)didFilterResponse:context:;
- (void).cxx_destruct;
@end
