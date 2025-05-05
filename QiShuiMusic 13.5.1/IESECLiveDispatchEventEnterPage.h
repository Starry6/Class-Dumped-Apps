@interface IESECLiveDispatchEventEnterPage : IESECLiveDispatchEventBase
@property (nonatomic) NSDictionary enterLiveParams;
@property (nonatomic) NSString pageBtmID;
- (id)enterLiveParams;
- (id)initWithEnterParams:;
- (id)pageBtmID;
- (void)setEnterLiveParams:;
- (void)setPageBtmID:;
- (long long)type;
- (id)eventName;
- (void).cxx_destruct;
- (id)eventData;
@end
