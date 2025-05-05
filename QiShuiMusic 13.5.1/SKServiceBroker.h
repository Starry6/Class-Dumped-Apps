@interface SKServiceBroker : NSObject
- (id)init;
- (id)_serviceConnection;
- (id)storeKitSynchronousService;
- (id)storeKitServiceWithErrorHandler:;
- (id)storeKitService;
- (void)_serviceConnectionInvalidated;
- (void).cxx_destruct;
- (id)storeKitSynchronousServiceWithErrorHandler:;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)_serviceConnectionWithName:;
+ (id)defaultBroker;
@end
