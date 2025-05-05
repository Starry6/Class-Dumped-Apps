@interface RPTActivationTestParameters : NSObject
@property (nonatomic) NSString testName;
@property (nonatomic) UIWindow window;
@property (nonatomic) @? completionHandler;
@property (nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTestName:;
- (id)composerBlock;
- (void)prepareWithComposer:;
- (id)testName;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)setWindow:;
- (id)window;
- (id)completionHandler;
- (id)initWithTestName:window:completionHandler:;
@end
