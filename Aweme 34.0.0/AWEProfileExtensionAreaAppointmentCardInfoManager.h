@interface AWEProfileExtensionAreaAppointmentCardInfoManager : NSObject
@property (nonatomic) NSString dbPath;
@property (nonatomic) NSString tabName;
@property (nonatomic) FMDatabase db;
@property (nonatomic) NSObject<OS_dispatch_queue> dbQueue;
@property (nonatomic) NSMutableSet appointmentInfos;
- (void)setDbPath:;
- (void)fetchAppointmentFromDB:;
- (id)appointmentInfos;
- (id)appointmentInfoWith:expiredTime:;
- (void)insertAppointmentToDB:expiredTime:;
- (void)setAppointmentInfos:;
- (void)fetchAppointmentWithTime:;
- (void)checkShowAppointmentKey:expiredTime:completion:;
- (void)consumptionWithAppointmentKey:expiredTime:;
- (void)setDb:;
- (id)db;
- (id)dbPath;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
- (id)dbQueue;
- (void)setDbQueue:;
+ (id)manager;
@end
