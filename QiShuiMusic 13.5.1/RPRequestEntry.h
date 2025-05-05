@interface RPRequestEntry : NSObject
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSString requestID;
@property (nonatomic) @? responseHandler;
@property (nonatomic) Q sendTicks;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) I xpcID;
@property (nonatomic) Q length;
- (void)setOptions:;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void)setTimer:;
- (id)options;
- (id)requestID;
- (void).cxx_destruct;
- (id)timer;
- (unsigned long long)length;
- (void)setLength:;
- (void)setRequestID:;
- (unsigned long long)sendTicks;
- (void)setSendTicks:;
- (unsigned int)xpcID;
- (void)setXpcID:;
@end
