@interface AWELiveAppointmentManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)queryLiveAppointment:completion:;
+ (void)queryLiveGroupAppointment:completion:;
+ (void)makeLiveAppointment:groupId:completion:;
+ (void)cancelLiveAppointment:groupId:completion:;
+ (void)liveAppointment:groupId:URLPath:isCancel:completion:;
@end
