@interface UIStoryboardDecodingContext : NSObject
@property (nonatomic) UIClassSwapper classSwapperTemplate;
@property (nonatomic) UIStoryboardSegueTemplate sourceSegueTemplate;
@property (nonatomic) UIViewController parentViewController;
@property (nonatomic) q childViewControllerIndex;
@property (nonatomic) @ sender;
@property (nonatomic) @? creator;
- (id)sender;
- (void).cxx_destruct;
- (void)setSender:;
- (id)parentViewController;
- (void)setParentViewController:;
- (id)sourceSegueTemplate;
- (void)setSourceSegueTemplate:;
- (id)classSwapperTemplate;
- (void)setClassSwapperTemplate:;
- (long long)childViewControllerIndex;
- (void)setChildViewControllerIndex:;
- (id)creator;
- (void)setCreator:;
@end
