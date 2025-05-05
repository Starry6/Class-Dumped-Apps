@interface IESLiveUserCardParallaxView : UIView
@property (nonatomic) NSString resourcePath;
@property (nonatomic) PuzzleHybridContainer parallaxContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentLynxData;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)parallaxContainer;
- (id)routerParams;
- (void)setParallaxContainer:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidRecieveError:;
- (void).cxx_destruct;
- (id)resourcePath;
- (void)setupUI;
- (void)setResourcePath:;
- (id)initWithResourcePath:;
@end
