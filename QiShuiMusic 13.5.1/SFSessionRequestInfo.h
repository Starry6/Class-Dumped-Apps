@interface SFSessionRequestInfo : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSDictionary request;
@property (nonatomic) @? responseHandler;
- (void)setOptions:;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (id)options;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setRequestID:;
@end
