@interface TTAccountDouYinAuthResp : TTAccountAuthResponse
@property (nonatomic) NSString state;
@property (nonatomic) NSError hostMobileOneAuthTicketError;
- (id)hostMobileOneAuthTicketError;
- (void)setHostMobileOneAuthTicketError:;
- (void)setState:;
- (id)state;
- (void).cxx_destruct;
@end
