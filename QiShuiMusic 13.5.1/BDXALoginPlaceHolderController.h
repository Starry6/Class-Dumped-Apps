@interface BDXALoginPlaceHolderController : BDXALoginViewController
@property (nonatomic) NSString startLoginType;
- (id)initWithStartLoginType:;
- (void)replaceWithLoginTypeAfterAvailableChecking:;
- (void)setStartLoginType:;
- (id)startLoginType;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
