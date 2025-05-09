@interface IESLiveIMUnifiedClientWrapper : IESLiveIMClientWrapper
@property (nonatomic) NSMutableDictionary paramsDicWithHTTP;
@property (nonatomic) NSMutableDictionary paramsDicRegistering;
@property (nonatomic) NSMutableDictionary paramsDicWithWS;
@property (nonatomic) NSTimer wrapperStateCheckTimer;
@property (nonatomic) NSMutableDictionary registerMap;
@property (nonatomic) BOOL needHttpFetching;
@property (nonatomic) double unusedTime;
@property (nonatomic) NSString umgwGlobalExt;
@property (nonatomic) NSObject<IESLiveIMUnifiedClientDelegate> delegate;
- (void)channel:closed:;
- (id)paramsDicWithWS;
- (void)setRegisterMap:;
- (id)assembleHttpFetcherParams:;
- (id)assembleWsFetcherHeaders:;
- (id)assembleWsFetcherParams:;
- (id)assembleWsRegisterdToken;
- (void)asyncSendRegisterPacket:With:params:;
- (void)channel:received:;
- (void)channel:transportChanged:;
- (void)doHttpFetchAndRegisterCheck;
- (void)doRegisterTimetoutCheck;
- (void)doWrapperStateCheck;
- (void)doWrapperUseStateCheck;
- (id)httpBodyField;
- (BOOL)needHttpFetching;
- (id)p_createAndSaveRegisterModelWith:token:;
- (id)p_createUnlinkPacketWith:params:;
- (void)p_handleRegisterBackMessage:;
- (void)p_updateParams:fromPacket:;
- (id)paramsDicRegistering;
- (id)paramsDicWithHTTP;
- (void)registerBusiness:params:;
- (id)registerMap;
- (void)setNeedHttpFetching:;
- (void)setParamsDicRegistering:;
- (void)setParamsDicWithHTTP:;
- (void)setParamsDicWithWS:;
- (void)setUmgwGlobalExt:;
- (void)setUnusedTime:;
- (void)setWrapperStateCheckTimer:;
- (void)setupWithConfig:;
- (void)setupWsFetcherWithConfig:;
- (void)startWrapperStateCheckTimer;
- (void)stopWrapperStateCheckTimer;
- (void)trackBizRegisterSucceed:model:params:;
- (id)umgwGlobalExt;
- (void)unregisterBusiness:params:;
- (double)unusedTime;
- (id)wrapperStateCheckTimer;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)reconnect;
- (id)delegate;
- (void).cxx_destruct;
@end
