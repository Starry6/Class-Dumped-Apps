@interface SKServiceProxy : NSObject
- (id)serviceConnection;
- (id)init;
- (void)_serviceConnectionInvalidated;
- (void).cxx_destruct;
- (id)objectProxyWithErrorHandler:;
- (id)inAppServiceWithErrorHandler:;
- (id)inAppService;
+ (id)serviceProxy;
+ (id)inAppServiceInterface;
+ (id)inAppClientInterface;
@end
