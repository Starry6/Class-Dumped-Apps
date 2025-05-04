@interface AWEPOILiveDataCenterCommonSource : NSObject
@property (nonatomic) NSMutableDictionary dataSource;
- (void)setData:data:isAppLifeCycle:;
- (void)handleRegisterMsgSubscriber:;
- (void)handleUnRegisterMsgSubscriber:;
- (void)handleReleaseMsgCenter:extra:;
- (void)addListener:subscriber:;
- (void)removeListener:subscriber:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (id)getData:;
@end
