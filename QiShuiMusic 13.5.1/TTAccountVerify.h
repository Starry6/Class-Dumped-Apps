@interface TTAccountVerify : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSDictionary verifyDecision;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleVerifyWithVerifyDecision:;
- (void)containerDidClose:;
- (void)containerWillDestory:;
- (void)finishWithError:result:;
- (void)handleVerifyWithVerifyDecision:completion:;
- (void)setVerifyDecision:;
- (id)verifyDecision;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (BOOL)didFinish;
- (void)setDidFinish:;
- (void)initData;
+ (id)sharedInstance;
@end
