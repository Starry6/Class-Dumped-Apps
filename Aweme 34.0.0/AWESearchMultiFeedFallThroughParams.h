@interface AWESearchMultiFeedFallThroughParams : NSObject
@property (nonatomic) UIViewController<AWEFallThroughFeedViewControllerProtocol> viewController;
@property (nonatomic) q index;
@property (nonatomic) NSArray filtVideos;
@property (nonatomic) NSDictionary feedLogExtra;
- (id)feedLogExtra;
- (void)setFeedLogExtra:;
- (id)filtVideos;
- (void)setFiltVideos:;
- (void)setIndex:;
- (long long)index;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
@end
