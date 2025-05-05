@interface IESLiveReceiverPKConnectingViewModel : NSObject
@property (nonatomic) HTSLivePKApi pkApi;
- (id)initWithDIContext:;
- (id)pkApi;
- (void)rejectInvitedWithHandler:;
- (void)setPkApi:;
- (void).cxx_destruct;
@end
