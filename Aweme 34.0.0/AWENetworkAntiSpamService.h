@interface AWENetworkAntiSpamService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)upSMSVerify:completion:;
- (void)downSMSVerify:completion:;
@end
