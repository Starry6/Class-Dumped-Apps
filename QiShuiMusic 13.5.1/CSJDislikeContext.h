@interface CSJDislikeContext : NSObject
@property (nonatomic) BOOL tapedDislike;
@property (nonatomic) CSJDislikeNewViewController vc;
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) Q source;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} startFrame;
@property (nonatomic) @? dislikeResultBlock;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? dislikeViewControllerPresentCompletionBlock;
@property (nonatomic) @? duplicateTapedDislike;
@property (nonatomic) @? dismissCompletionBlock;
- (void)_showFromViewController:dislikeResultSuccessBlock:;
- (void)_showNewFromViewController:dislikeResultSuccessBlock:;
- (id)dislikeResultBlock;
- (id)dislikeViewControllerPresentCompletionBlock;
- (id)duplicateTapedDislike;
- (id)materialMeta;
- (id)realPresentingViewControllerFromViewController:;
- (void)setDislikeResultBlock:;
- (void)setDislikeViewControllerPresentCompletionBlock:;
- (void)setDuplicateTapedDislike:;
- (void)setMaterialMeta:;
- (void)setTapedDislike:;
- (void)setVc:;
- (void)showFromViewController:inView:;
- (BOOL)tapedDislike;
- (id)init;
- (void)remove;
- (void)setCancelBlock:;
- (id)cancelBlock;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (void)setStartFrame:;
- (id)startFrame;
- (id)vc;
- (void)showFromViewController:;
- (id)dismissCompletionBlock;
- (void)setDismissCompletionBlock:;
@end
