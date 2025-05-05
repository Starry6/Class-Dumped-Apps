@interface RPTFluidSplitViewTestParameters : NSObject
@property (nonatomic) @? composerBlock;
@property (nonatomic) NSString testName;
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
- (void).cxx_destruct;
- (void)setConversion:;
- (id)completionHandler;
- (id)initWithTestName:splitViewController:completionHandler:;
@end
