@interface IESLiveLinkRTCInteractLogReporter : NSObject
@property (nonatomic) Q rtcReportId;
@property (nonatomic) IESLiveLinkRTCLogReportInfo info;
@property (nonatomic) <IESLiveLinkRTCLogReportDelegate> delegate;
- (void)reportInteractStatusLog:params:;
- (void)setRtcReportId:;
- (unsigned long long)rtcReportId;
- (void)setupWithReportInfo:;
- (void)dealloc;
- (void)setDelegate:;
- (void)setInfo:;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDelegate:;
- (id)info;
- (id)commonLog;
@end
