@interface AWERVLVAppointmentViewModel : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWERVDetailPageContext currentContext;
@property (nonatomic) AWELVideoAppointmentInfoModel appointmentInfo;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)appointmentInfo;
- (void)setAppointmentInfo:;
- (id)appointmentTime;
- (id)countToString;
- (BOOL)isAppointmentInfo;
- (void)reportAppointmentStatusChange:;
- (id)currentContext;
- (void)setCurrentContext:;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
+ (void)reportAppointmentStatusChange:completion:;
+ (id)appointmentTime:;
+ (BOOL)shouldShowAppointmentWithModel:;
+ (BOOL)isHitAppointmentTime:;
+ (void)updateModel:isAppointed:;
+ (void)reportAppointmentStatus:params:completion:;
+ (id)numberWithFloat:minimuFractionDigits:maximumFractionDigits:minimumIntegerDigits:maximumeIntegerDigits:;
@end
