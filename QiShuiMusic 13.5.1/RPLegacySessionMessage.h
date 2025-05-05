@interface RPLegacySessionMessage : NSObject
@property (nonatomic) NSDictionary message;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSString requestID;
@property (nonatomic) @? responseHandler;
- (void)setOptions:;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void)setMessage:;
- (id)options;
- (id)requestID;
- (id)message;
- (void).cxx_destruct;
- (void)setRequestID:;
@end
