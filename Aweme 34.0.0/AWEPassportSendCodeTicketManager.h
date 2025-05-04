@interface AWEPassportSendCodeTicketManager : NSObject
@property (nonatomic) NSString nextURL;
@property (nonatomic) NSString smsContent;
@property (nonatomic) NSString channelMobile;
@property (nonatomic) NSString verifyTicket;
@property (nonatomic) NSString nextURLWithTicket;
- (id)verifyTicket;
- (void)setVerifyTicket:;
- (void)setLatestTicket:;
- (id)nextURL;
- (void)setNextURL:;
- (id)smsContent;
- (void)setSmsContent:;
- (id)channelMobile;
- (void)setChannelMobile:;
- (id)nextURLWithTicket;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
