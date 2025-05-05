@interface SFRequestMessage : SFMessage
@property (nonatomic) @? responseHandler;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void).cxx_destruct;
- (void)invalidate;
@end
