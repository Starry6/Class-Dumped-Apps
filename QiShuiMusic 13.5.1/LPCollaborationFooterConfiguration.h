@interface LPCollaborationFooterConfiguration : NSObject
@property (nonatomic) SLCollaborationFooterViewModel viewModel;
@property (nonatomic) @? action;
- (id)viewModel;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)configurationWithViewModel:action:;
@end
