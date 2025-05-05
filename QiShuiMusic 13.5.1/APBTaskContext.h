@interface APBTaskContext : NSObject
@property (nonatomic) NSInteger state;
@property (nonatomic) NSInteger resultCode;
@property (nonatomic) NSString failReason;
@property (nonatomic) NSMutableDictionary successResult;
@property (nonatomic) NSString retCodeSub;
@property (nonatomic) NSString retMessageSub;
- (id)retCodeSub;
- (id)retMessageSub;
- (void)setRetCodeSub:;
- (void)setRetMessageSub:;
- (void)setSuccessResult:;
- (id)init;
- (int)resultCode;
- (void)setState:;
- (void)setResultCode:;
- (int)state;
- (void).cxx_destruct;
- (id)failReason;
- (void)setFailReason:;
- (id)successResult;
@end
