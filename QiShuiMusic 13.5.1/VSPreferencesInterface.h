@interface VSPreferencesInterface : NSObject
@property (nonatomic) NSUserDefaults defaults;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSDate OOBTriggeredDate;
@property (nonatomic) BOOL OOBNeedsToBeMeasured;
@property (nonatomic) NSDate lastTTSRequestDate;
@property (nonatomic) NSString deviceUUID;
- (id)deviceUUID;
- (id)defaults;
- (void)dealloc;
- (void)setDefaults:;
- (void)setOOBNeedsToBeMeasured:;
- (void)removeSubscriptionsForAccessory:;
- (void)setOOBTriggeredDate:;
- (id)lock;
- (id)initWithSuiteName:;
- (void)setSubscribedVoices:forClientID:accessoryID:;
- (id)OOBTriggeredDate;
- (id)subscribedVoicesForClientID:accessoryID:;
- (void).cxx_destruct;
- (id)lastTTSRequestDate;
- (void)migrateDefaults;
- (void)setLastTTSRequestDate:;
- (BOOL)OOBNeedsToBeMeasured;
- (void)setLock:;
+ (id)dictionaryRepresentationOfVoices:;
+ (id)defaultInstance;
@end
