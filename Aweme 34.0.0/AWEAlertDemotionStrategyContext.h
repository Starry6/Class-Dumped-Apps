@interface AWEAlertDemotionStrategyContext : NSObject
@property (nonatomic) NSObject alert;
@property (nonatomic) NSString alertID;
@property (nonatomic) NSString eventID;
@property (nonatomic) q priority;
- (void)setAlertID:;
- (id)eventID;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setAlert:;
- (void)setEventID:;
- (id)alert;
- (id)alertID;
@end
