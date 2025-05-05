@interface BDNativeBridgeManager : NSObject
@property (nonatomic) NSMutableDictionary invokeDic;
@property (nonatomic) <BDNativeBridgeManagerDelegate> delegate;
- (void)handleNativeInvokeMessage:;
- (id)invokeDic;
- (id)messageJSONStringByDic:;
- (void)registerHandler:bridgeName:;
- (void)registerHandler:forName:;
- (void)setInvokeDic:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
