@interface RPTResizeTestParameters : NSObject
@property (nonatomic) NSString testName;
@property (nonatomic) UIWindow window;
@property (nonatomic) {CGSize=dd} minimumWindowSize;
@property (nonatomic) {CGSize=dd} maximumWindowSize;
@property (nonatomic) @? completionHandler;
@property (nonatomic) RPTCoordinateSpaceConverter conversion;
@property (nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTestName:;
- (id)composerBlock;
- (void)prepareWithComposer:;
- (id)testName;
- (id)conversion;
- (void)setCompletionHandler:;
- (id)maximumWindowSize;
- (void).cxx_destruct;
- (void)setWindow:;
- (id)window;
- (void)setConversion:;
- (id)completionHandler;
- (id)initWithTestName:window:completionHandler:;
- (id)minimumWindowSize;
- (void)setMinimumWindowSize:;
- (void)setMaximumWindowSize:;
@end
