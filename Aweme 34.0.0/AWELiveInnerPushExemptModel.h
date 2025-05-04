@interface AWELiveInnerPushExemptModel : NSObject
@property (nonatomic) BOOL isPlayWith;
@property (nonatomic) BOOL isGameAppointment;
- (BOOL)isExempted;
- (BOOL)isGameAppointment;
- (void)setIsPlayWith:;
- (void)setIsGameAppointment:;
- (BOOL)isPlayWith;
@end
