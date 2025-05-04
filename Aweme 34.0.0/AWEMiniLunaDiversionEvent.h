@interface AWEMiniLunaDiversionEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) AWEMusicDSPEventModel eventModel;
@property (nonatomic) NSString fromAction;
@property (nonatomic) NSString directType;
@property (nonatomic) NSDictionary customParams;
- (void)setCustomParams:;
- (id)customParams;
- (id)fromAction;
- (void)setFromAction:;
- (id)eventModel;
- (void)setEventModel:;
- (id)directType;
- (void)setDirectType:;
- (void)report;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)params;
- (void)setParams:;
+ (id)showEvent;
@end
