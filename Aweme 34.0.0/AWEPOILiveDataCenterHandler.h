@interface AWEPOILiveDataCenterHandler : NSObject
@property (nonatomic) NSMapTable dataSource;
@property (nonatomic) AWEPOILiveDataCenterCommonSource commonSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleRegisterMsgSubscriber:;
- (void)handleUnRegisterMsgSubscriber:;
- (void)handleReleaseMsgCenter:extra:;
- (void)setCommonSource:;
- (id)commonSource;
- (void)registerSource:key:;
- (void)setData:data:source:isAppLifeCycle:;
- (id)getData:source:;
- (BOOL)handlePostMessage:withSubscriber:;
- (void)unregisterSourceWithKey:;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end
