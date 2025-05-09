@interface AWEAlertContext : NSObject
@property (nonatomic) BOOL mr_enableAccessControl;
@property (nonatomic) NSString mr_accessID;
@property (nonatomic) NSString mr_componentTaskID;
@property (nonatomic) NSString mr_enterFrom;
@property (nonatomic) NSDictionary mr_trackExtra;
@property (nonatomic) NSString alertID;
@property (nonatomic) NSString eventID;
@property (nonatomic) UIResponder alertResponder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEAlertProtocol> alert;
@property (nonatomic) q priority;
@property (nonatomic) <AWEAlertEventProtocol> eventItem;
@property (nonatomic) NSString alertID;
@property (nonatomic) UIResponder alertResponder;
@property (nonatomic) Q canceledReason;
@property (nonatomic) NSString eventID;
- (unsigned long long)canceledReason;
- (id)eventItem;
- (void)setAlertID:;
- (void)setMr_componentTaskID:;
- (void)setMr_enterFrom:;
- (void)setMr_trackExtra:;
- (BOOL)mr_enableAccessControl;
- (id)mr_accessID;
- (id)mr_componentTaskID;
- (id)mr_enterFrom;
- (id)mr_trackExtra;
- (id)alertResponder;
- (void)setEventItem:;
- (void)setCanceledReason:;
- (void)setAlertResponder:;
- (id)eventID;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setAlert:;
- (id)alert;
- (id)alertID;
@end
