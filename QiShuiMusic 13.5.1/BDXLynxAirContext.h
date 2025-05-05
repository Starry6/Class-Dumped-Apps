@interface BDXLynxAirContext : NSObject
@property (nonatomic) LynxView lynxView;
@property (nonatomic) BDXLynxAirDataCenter dataCenter;
@property (nonatomic) BDXLynxAirScheduler schedular;
@property (nonatomic) NSMutableDictionary sessionData;
- (id)dataCenter;
- (id)lynxView;
- (id)schedular;
- (void)setDataCenter:;
- (void)setLynxView:;
- (void)setSchedular:;
- (id)init;
- (void).cxx_destruct;
- (id)sessionData;
- (void)setSessionData:;
@end
