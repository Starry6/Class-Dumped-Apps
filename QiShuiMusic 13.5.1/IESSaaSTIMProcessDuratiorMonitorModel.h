@interface IESSaaSTIMProcessDuratiorMonitorModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary userInfo;
- (void)recordEnd;
- (void)recordStart;
- (void)setEvent:;
- (id)event;
- (id)userInfo;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)initWithEvent:;
@end
