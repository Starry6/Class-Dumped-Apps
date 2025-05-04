@interface AWELiveShelfLynxModuleOperator : NSObject
@property (nonatomic) AWELiveLifeLynxView lynxModule;
@property (nonatomic) UIResponder btmResponder;
- (void)setBtmResponder:;
- (id)btmResponder;
- (id)currentGeckoVersion;
- (void)setupLynxModule;
- (void)setLynxModule:;
- (id)lynxModule;
- (void)sendShelfDataUpdateEventWithServerData:roomData:nativeData:;
- (void)sendShelfCardClickEventWithIndex:clickType:trackingParams:;
- (void)sendShelfCardShowEventWithIndexes:shelfUUID:cardType:tagsSizeList:;
- (void)sendCloseLifeShelfEvent;
- (void)sendShelfDidDisappearEventWithParams:;
- (void)sendTopBarTabClickEventWithParams:;
- (void)sendCartSessionIdUpdateEvent:;
- (id)init;
- (void)dealloc;
- (BOOL)isReady;
- (void).cxx_destruct;
@end
