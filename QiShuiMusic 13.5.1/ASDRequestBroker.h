@interface ASDRequestBroker : NSObject
- (id)init;
- (void)submitRequest:withReplyHandler:;
- (void)cancelAllRequestsWithErrorHandler:;
- (void).cxx_destruct;
- (id)description;
+ (id)interface;
@end
