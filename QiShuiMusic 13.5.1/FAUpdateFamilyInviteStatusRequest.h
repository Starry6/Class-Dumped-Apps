@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest
@property (nonatomic) NSString inviteCode;
@property (nonatomic) NSURL requestUrl;
@property (nonatomic) q inviteStatus;
- (id)requestUrl;
- (void)startRequestWithCompletionHandler:;
- (void).cxx_destruct;
- (long long)inviteStatus;
- (id)initWithInviteCode:inviteStatus:requestUrl:;
- (id)inviteCode;
@end
