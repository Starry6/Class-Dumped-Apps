@interface BDNativeWebBridgeManager : NSObject
@property (nonatomic) NSMutableDictionary invokeDic;
@property (nonatomic) <BDNativeWebBridgeManagerDelegate> delegate;
- (void)handleCallBackMessage:;
- (void)handleInvokeMessage:;
- (void)handleMixRenderMessage:;
- (id)invokeDic;
- (id)messageJSONStringByDic:;
- (void)registerHandler:bridgeName:;
- (void)registerHandler:forName:;
- (void)setInvokeDic:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
