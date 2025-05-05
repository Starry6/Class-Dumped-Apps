@interface RPRequestRegistration : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSDictionary options;
@property (nonatomic) @? handler;
@property (nonatomic) @? cnxHandler;
- (void)setOptions:;
- (void)setHandler:;
- (id)cnxHandler;
- (void)setCnxHandler:;
- (id)handler;
- (id)options;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
@end
