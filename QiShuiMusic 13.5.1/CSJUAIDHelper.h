@interface CSJUAIDHelper : NSObject
@property (nonatomic) Q restrictedState;
@property (nonatomic) NSDictionary uaid;
@property (nonatomic) NSLock lock;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL mState;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) NSObject<OS_dispatch_queue> uaidQueue;
- (void)getUAIDInfoAfterCompletion:;
- (void)setMState:;
- (void)setRestrictedState:;
- (void)setUAIDInfo:;
- (void)setUAIDInfoWithToken:errCode:carrier:andVendor:;
- (void)setUaid:;
- (void)setUaidQueue:;
- (id)statsInfoForUAID;
- (id)uaid;
- (id)uaidQueue;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)lock;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setLock:;
- (unsigned long long)restrictedState;
- (BOOL)mState;
+ (id)shareInstance;
@end
