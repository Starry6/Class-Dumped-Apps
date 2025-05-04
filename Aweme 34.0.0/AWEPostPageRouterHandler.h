@interface AWEPostPageRouterHandler : NSObject
@property (nonatomic) AWEPostPageContext context;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSHashTable intepreters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)dismissAniamted:completion:;
- (void)didPublishTransition;
- (void)dismissAniamtedWhenSaveDraft:completion:;
- (void)present:animated:completion:;
- (void)presentNavigationViewController:animated:completion:;
- (void)closeCurrentPage;
- (void)addIntepreter:;
- (void)didEndCreation;
- (id)intepreters;
- (void)setIntepreters:;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setViewController:;
- (id)rootPresentingViewController;
@end
