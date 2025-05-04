@interface AWELivePaidLiveBaseInfo : AWEBaseApiModel
@property (nonatomic) q ticketSessionId;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) NSInteger delivery;
- (int)viewRight;
- (void)setViewRight:;
- (long long)ticketSessionId;
- (void)setTicketSessionId:;
- (int)delivery;
- (void)setDelivery:;
+ (id)JSONKeyPathsByPropertyKey;
@end
