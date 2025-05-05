@interface APBResponse : NSObject
@property (nonatomic) NSInteger resultType;
@property (nonatomic) NSString failReason;
@property (nonatomic) NSString token;
@property (nonatomic) NSMutableDictionary successResult;
@property (nonatomic) NSString retCodeSub;
@property (nonatomic) NSString retMessageSub;
- (id)initWithResultType:failReason:token:retCodeSub:retMessageSub:successResult:;
- (id)initWithResultType:failReason:token:successResult:;
- (id)retCodeSub;
- (id)retMessageSub;
- (void)setRetCodeSub:;
- (void)setRetMessageSub:;
- (void)setSuccessResult:;
- (id)init;
- (id)token;
- (void)setResultType:;
- (int)resultType;
- (void)setToken:;
- (void).cxx_destruct;
- (id)failReason;
- (void)setFailReason:;
- (id)successResult;
@end
