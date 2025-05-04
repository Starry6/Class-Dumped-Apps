@interface AWEDetailImageTemplateActionService : NSObject
@property (nonatomic) AWEDetailImageTemplateViewModel viewModel;
@property (nonatomic) AWEDetailImageTemplateTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionWithActionSender:;
- (id)initWithStateContext:tracker:;
- (id)tracker;
- (id)viewModel;
- (void)setTracker:;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
