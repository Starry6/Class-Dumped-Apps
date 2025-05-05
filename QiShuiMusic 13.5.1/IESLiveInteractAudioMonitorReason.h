@interface IESLiveInteractAudioMonitorReason : NSObject
@property (nonatomic) NSString logString;
- (id)initWithReason:callClassName:callMethodName:;
- (id)initWithReason:detail:;
- (id)initWithReason:;
- (id)logString;
- (void).cxx_destruct;
- (void)setLogString:;
@end
