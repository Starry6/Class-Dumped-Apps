@interface KVDonateXPCClient : NSObject
- (void)terminate;
- (id)openDatasetStream:validity:itemType:originAppId:deviceId:userId:options:completion:;
- (void)addItems:completion:;
- (void)removeItemId:completion:;
- (id)closeDatasetStream:;
- (id)abortDatasetStream;
- (void).cxx_destruct;
- (id)initWithClientId:;
@end
