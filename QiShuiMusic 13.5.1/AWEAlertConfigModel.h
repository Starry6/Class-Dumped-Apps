@interface AWEAlertConfigModel : NSObject
@property (nonatomic) NSObject<NSCopying> alertId;
@property (nonatomic) q triggerEvent;
@property (nonatomic) q priority;
@property (nonatomic) BOOL cancelOtherAlerts;
@property (nonatomic) NSString lynxURL;
- (id)lynxURL;
- (BOOL)cancelOtherAlerts;
- (void)setCancelOtherAlerts:;
- (void)setLynxURL:;
- (void)setPriority:;
- (void)setTriggerEvent:;
- (long long)triggerEvent;
- (void).cxx_destruct;
- (long long)priority;
- (id)alertId;
- (void)setAlertId:;
@end
