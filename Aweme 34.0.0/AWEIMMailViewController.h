@interface AWEIMMailViewController : MFMailComposeViewController
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMailAddress:completionBlock:;
- (id)init;
- (id)completion;
- (void)viewDidLoad;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)mailComposeController:didFinishWithResult:error:;
@end
