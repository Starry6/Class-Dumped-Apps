@interface AWEMessageReachPopViewAccessModel : NSObject
@property (nonatomic) <AWEPzComponentProtocol> pzComponent;
@property (nonatomic) NSString locs;
@property (nonatomic) NSString trigger;
@property (nonatomic) NSString taskID;
@property (nonatomic) <AWEAlertContextTrackProtocol> alertContext;
- (id)alertContext;
- (void)setAlertContext:;
- (void)setPzComponent:;
- (id)pzComponent;
- (id)locs;
- (void)setLocs:;
- (void)setTrigger:;
- (id)trigger;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
@end
