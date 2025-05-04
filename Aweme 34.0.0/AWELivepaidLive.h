@interface AWELivepaidLive : AWEBaseApiModel
@property (nonatomic) q paidType;
@property (nonatomic) q viewRight;
@property (nonatomic) double maxTrialDuration;
@property (nonatomic) AWELivePlaybackTicketSession ticketSession;
@property (nonatomic) BOOL delivery;
- (long long)paidType;
- (void)setPaidType:;
- (long long)viewRight;
- (void)setViewRight:;
- (id)ticketSession;
- (void)setMaxTrialDuration:;
- (double)maxTrialDuration;
- (void)setTicketSession:;
- (void).cxx_destruct;
- (BOOL)delivery;
- (void)setDelivery:;
+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
