@interface AWELivePlaybackTicketSession : AWEBaseApiModel
@property (nonatomic) q ticketSessionID;
@property (nonatomic) NSString ticketSessionIDStr;
@property (nonatomic) NSString ticketPanelSixJumpUrl;
@property (nonatomic) q ticketCategory;
- (long long)ticketSessionID;
- (id)ticketPanelSixJumpUrl;
- (long long)ticketCategory;
- (void)setTicketCategory:;
- (void)setTicketSessionID:;
- (id)ticketSessionIDStr;
- (void)setTicketSessionIDStr:;
- (void)setTicketPanelSixJumpUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
