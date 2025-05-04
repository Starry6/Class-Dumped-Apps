@interface AWEUserLoginSMSVerificationContext : NSObject
@property (nonatomic) DYASecurityTicketModel ticketModel;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) NSString autoSendAccountSource;
- (id)extraDict;
- (void)setExtraDict:;
- (id)ticketModel;
- (void)setTicketModel:;
- (id)autoSendAccountSource;
- (void)setAutoSendAccountSource:;
- (id)initWithTicketModel:extraDict:autoSendAccountSource:;
- (void).cxx_destruct;
@end
