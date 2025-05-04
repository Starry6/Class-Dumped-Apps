@interface AWEStudioBaseViewController : UIViewController
@property (nonatomic) @? willAppearBlock;
@property (nonatomic) @? didAppearBlock;
@property (nonatomic) @? willDisappearBlock;
@property (nonatomic) @? didDisappearBlock;
- (id)willAppearBlock;
- (void)setWillAppearBlock:;
- (id)didDisappearBlock;
- (void)setDidDisappearBlock:;
- (void).cxx_destruct;
- (id)didAppearBlock;
- (void)setDidAppearBlock:;
- (void)setWillDisappearBlock:;
- (id)willDisappearBlock;
@end
