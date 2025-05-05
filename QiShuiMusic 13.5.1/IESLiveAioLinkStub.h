@interface IESLiveAioLinkStub : NSObject
@property (nonatomic) NSMutableDictionary channels;
- (void)callLynxService:method:tag:view:params:error:;
- (id)closeChannelData:closeRead:;
- (id)createChannelData:method:tag:;
- (void)processCloseChannel:flag:;
- (void)receiveLynxData:;
- (void)receiveLynxData:params:error:;
- (void)registerLynxService:withView:;
- (void)registerNativeService:withMonitorView:;
- (void)removeChannelWithTag:reason:;
- (void)sendReturnDataToLynx:error:tag:closeChannel:;
- (id)writeChannelData:params:error:;
- (id)channels;
- (id)init;
- (void).cxx_destruct;
- (void)setChannels:;
+ (id)shareInstace;
@end
