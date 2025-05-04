@interface AWEEcomResultViewControllerBuilder : NSObject
@property (nonatomic) AWEEcomSearchViewModel searchViewModel;
@property (nonatomic) AWEEcomSearchStateStore searchStateStore;
@property (nonatomic) AWEEcomSearchProfile profile;
- (id)searchViewModel;
- (void)setSearchViewModel:;
- (id)resultViewController;
- (id)middleViewController;
- (id)sugViewController;
- (id)searchStateStore;
- (void)setSearchStateStore:;
- (void)setProfile:;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (id)profile;
+ (id)liveProductSceneBuilder:;
+ (id)defaultSceneBuilder:;
+ (id)mallSceneBuilder:;
@end
