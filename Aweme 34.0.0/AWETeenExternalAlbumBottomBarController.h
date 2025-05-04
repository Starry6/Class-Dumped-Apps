@interface AWETeenExternalAlbumBottomBarController : NSObject
@property (nonatomic) AWETeenExternalAlbumBottomBarView pBottomBarView;
@property (nonatomic) <AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (id)pBottomBarView;
- (void)bottomBarDidClick:;
- (void)setPBottomBarView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
@end
