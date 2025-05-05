@interface ASDRequest : NSObject
@property (nonatomic) <ASDRequestProxy> proxy;
@property (nonatomic) <ASDRequestObserver> observer;
@property (nonatomic) NSUUID requestID;
- (void)setProxy:;
- (id)init;
- (id)proxy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)requestID;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)description;
- (id)observer;
- (void)receiveResponse:;
- (void)_cancelWithErrorHandler:;
- (void)_startWithErrorHandler:;
+ (BOOL)supportsSecureCoding;
+ (void)cancelAllRequestsWithErrorHandler:;
+ (id)_sharedBroker;
@end
