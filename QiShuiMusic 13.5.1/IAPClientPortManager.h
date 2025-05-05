@interface IAPClientPortManager : NSObject
@property (nonatomic) BOOL iaptransportdIsRunning;
- (id)init;
- (void)dealloc;
- (BOOL)iaptransportdIsRunning;
- (void)setIaptransportdIsRunning:;
- (void)sendData:data:length:;
- (int)registerSendDataHandler:queue:sendBlock:;
- (int)unregisterSendDataHandler:;
- (int)forwardAccessoryDataToIAP:data:length:;
- (void)reRegisterHandlers;
+ (id)sharedInstance;
@end
