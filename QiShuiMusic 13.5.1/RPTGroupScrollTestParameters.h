@interface RPTGroupScrollTestParameters : NSObject
@property (nonatomic) NSArray parameters;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString testName;
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
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)completionHandler;
+ (id)newWithTestName:parameters:completionHandler:;
@end
